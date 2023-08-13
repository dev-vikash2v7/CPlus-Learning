#include <iostream>
using namespace std;

// A is an abstracct class
class A
{
public:
    // virtual void f() = 9;  //error: invalid pure specifier (only '= 0' is allowed)
    virtual void f() = 0; //pure virtual member function
//   virtual void f()
//     {
//         cout << "f() from class A\n";
//     }
};

class B : public A
{
public:
    void f()
    {
        cout << "f() from class B\n";
    };
};
int main()
{
    // A a; // error: cannot declare variable 'a' to be of abstract type 'A'
    B b;
    A *ptra = &b;
    
    //  A a;
    ptra->f();

    return 0;
};

/*
it is designed to be specifically used as a base class

contains at least one pure virtual function.

pure virtual functions are  inherited.

a func is declared if it has no defination and cannot be executed


*/