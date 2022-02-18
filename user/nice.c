#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Incorrect Input\nFormat: nice N PROG [ARG]...\n");
        exit(0);
    }
    
    if(nice(atoi(argv[1])) == -1)
    {
        printf("Error, nice value must be between -20 and 19 inclusive\n");
    }
    
    if(argc > 2)
    {
        exec(argv[2], &argv[2]);
    }
    
    exit(0);
}

