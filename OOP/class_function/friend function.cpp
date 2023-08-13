#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setNumber(int, int);
    void showNumber();

    //below lines means that non member - sumcomplex func is allowed to do anything with my private members
    friend Complex sumComplex(Complex, Complex);

    Complex operator+(Complex obj)
    {
        Complex temp;

        cout << a << endl << obj.a << endl;
        temp.a = a + obj.a; //8 + 5, 13+2
        temp.b = b + obj.b;

        return temp;
    }
};

void Complex::setNumber(int n1, int n2)
{
    a = n1;
    b = n2;
}

void Complex::showNumber()
{
    cout << "your number is " << a << "+" << b << "i" << endl;
}

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

    return o3;
};

int main()
{
    Complex c1, c2, c123, c3, sum;

    c1.setNumber(8, 9);
    c2.setNumber(5, 3);
    c3.setNumber(2, 13);

    c1.showNumber();
    c2.showNumber();
    c3.showNumber();

    // c123 = c1 + c2 + c3; //a + obj.a = 8+5 ,  9+3
    // c123.showNumber();

    //friend func
    sum = sumComplex(c1, c2);
    sum.showNumber();
    return 0;
}

/*
properties of friend frunction

1. not in the scope of class

2. since it is not in the scope of the class, it cannot from the object of that class . c1.sumcomplex == invalid

3. can be invoked without the help of any object

4. usually contains the objects as args 

5. can be declare inside public or private section of the class

6. it cannot access the members directly by their names and need objname.membername to access any member
*/
