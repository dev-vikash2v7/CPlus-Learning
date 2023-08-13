#include <iostream>
using namespace std;

#define size 1

#line 32
#ifndef __a
// error message
#error sorry, your a variable is not declared ply fix it
#endif

#if size > 10
#undef size
#define size 10

#elif size > 5
#undef size
#define size 5

#else
#undef size
#define size 2

#endif

void line()
{
    cout << "line number is " << __LINE__ << endl;
}
int main()

{
#line 1 "coding.cpp"
    d
            cout
        << size << endl;
    line();
#line 69 "prog.cpp"
    int a++ + ;

    return 0;
}