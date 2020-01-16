// comment this #define will not output any log
#define _xf_log_console

#include "../include/xf_log_console.h"

int main()
{
    std::cout << "test print log:" <<std::endl;

    _xfLog("this is a log");

    _xfLog("My name is %s, my number is %d", "Frank", 10);

    long long x = 100;
    _xfLog("My name is %s, my number is %d", "Xiong", x);

    // _xfLog(); // error, if _xf_log_console is not defined.

    return 0;
}
