#include "../includes/includes.hpp"

int main(int ac, char **argv)
{
    if (strncmp(argv[1], "install", 7) == 0)
    {
        __ft_install_service();
        std::cout << "Service {tinky} installed successfully" << std::endl;
        return (0);
    }
    else if(strncmp(argv[1], "start", 5) == 0)
    {
        __ft_start_service();
        std::cout << "Service {tinky} started successfully" << std::endl;
        return(0);
    }
    else if(strncmp(argv[1], "stop", 4) == 0)
    {
        __ft_stop_service();
        std::cout << "Service {tinky} stopped successfully" << std::endl;
        return(0);
    }
    else if (strncmp(argv[1], "delete", 6) == 0)
    {
        __ft_delete_service();
        std::cout << "Service {tinky} deleted successfully" << std::endl;
        return(0);
    }
    else
    {
        std::cout << "Error Usage: svc.exe install | start | stop | delete" << std::endl;
    }
    return (0);
}