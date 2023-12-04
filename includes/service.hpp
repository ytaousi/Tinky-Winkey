#ifndef SERVICE__HPP
#define SERVICE__HPP

#include <winsvc.h>
#include <securitybaseapi.h>
#include <libloaderapi.h>
#include <errhandlingapi.h>
#include <sysinfoapi.h>
#include <strsafe.h>
#include <synchapi.h>
#include <heapapi.h>
#include <iostream>

void __ft_install_service(void);
void __ft_start_service(void);
void __ft_stop_service(void);
void __ft_delete_service(void);


/*

class service {
    private:

    public:
        
};

*/

#endif