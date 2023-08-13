#include <iostream>
using namespace std;

class Super{
    public:
    int a= 69;
    int b = 6969;
};

class Sub : public Super{
    public:
    int b;
    int c;
};


int main()
{
    Sub sub;
    Super super;

    sub.a = 1;
    sub.b = 2; //sub's overrides that of super class 

    sub.c  = 4;

    Super *ps = &sub; //supclass pointer to superclass 

    cout << sub.a << " " << sub.b << " " <<  sub.c << " "  <<  endl;
    
    sub.Super :: b = 3; // sub.super::b refers to 'b' of super subobject of d(instance on Sub)
    cout << ps->a << " " << ps->b   <<  endl;

    cout << super.a << " " << super.b  <<  endl;



    return 0;
}