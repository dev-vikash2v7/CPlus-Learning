#include <iostream>
using namespace std;

class Fraction
{
private:
    int num, denom;

public:
static int x;
    Fraction(int, int);         //construtor with args


    //with const it cannot chg value with this->
    void getValue(int &, int &) const;
};

int Fraction ::x =  20; //if x is not static then it will it will error: 'int Fraction::x' is not a static data member of 'class Fraction'

Fraction::Fraction(int a, int b)
{
   this-> num = a; //explicit use of this ptr
    denom = b;
    //cannot assign this to anything else;
    //as this is a constant
};


void Fraction ::getValue(int &a, int &b) const
{
    a =this-> num; //explicit use of this ptr
    b =this-> denom; //

    //this->  num  = 20; // error: assignment of member 'Fraction::num' in read-only object
    //cannot write this-> something as lvalue , like
    //as this is not allowed for const member function
}

int main()
{
    int num, denom;

    Fraction f(5, 2);
    
    f.getValue(num, denom);
cout << num << endl << denom << endl;

f.x = 9;
cout << f.x << endl;
    

    return 0;
}


/*
    > this pointer :
                     * this pointer is passed as an extra arg to all no - static  member function call.

                     * member data is addressed by evaluating this-> member-name
 */