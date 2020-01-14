// comment this #define will not output any log
#define _xf_log_console

#include "../include/xf_log_console.h"

int main()
{
    std::cout << "test print log:" <<std::endl;

    _xflog("this is a log");

    _xflog("My name is %s, my number is %d", "Frank", 79361486);

    // _xflog(); // error, if _xf_log_console is not defined.

    return 0;
}
