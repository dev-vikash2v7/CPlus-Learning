#include <stdio.h>
#include <iostream>

extern "C"
{
// the linkage specification tells c++ that myCLib func webre compiled with C compiler not c++ compiler
#include <myCLib.h>
}

int main()
{
    cout << myFunc();
    cout << "hello from c file but c++ format\n";

    return 0;
}