#include <iostream>
using namespace std;

// a class X cannot have a membet that is of type X . it can giwever contain it can
// class X
// {
//     X();               //member function of X
//     X *x_ptr;          //pointers to X
//     X &x_ref;          // refrences to X
//     static X *x_count; //static objects of X
//     X x_fun(X);        //member function of X can take arg of type X and return type X
// };

class Fraction
{
private: // encapsulated data portion
    int num, denom;

public:                          //public interface function
    void setValue(int, int);     //kind of transformer func . changes the state of an object
    void getValue(int &, int &); //kind of  acessor func . it does not chg the state of obj
};

void Fraction ::setValue(int a, int b)
{
    num = a;
    denom = b;
    cout << num << endl
         << denom << endl;
}

void Fraction :: getValue(int &a, int &b)
{
    a = num;
    b = denom;
   
}

int main()
{
    Fraction obj;
    int n = 4, m = 3;
    // obj.setValue(n, m) ;
    obj.getValue(n, m);

    return 0;
}

//definitons of the function members are called the class implementation.
