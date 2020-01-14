#define _xf_log_console

#include "../include/xf_log_console.h"

int main()
{
    _xflog("this is a log");

    _xflog("My name is %s, my number is %d", "Frank", 79361486);

    // _xflog(); // error

    return 0;
}
