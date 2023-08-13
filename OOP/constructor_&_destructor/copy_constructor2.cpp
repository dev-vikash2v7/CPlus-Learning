#include <iostream>
using namespace std;

class Fraction
{
private:
    int num, denom;

public:
    Fraction(int, int);         //construtor with args
    Fraction(const Fraction & , int); //copy constructor
    void getValue(int &, int &);
};

//constructor with args
Fraction::Fraction(int a, int b)
{
    num = a;
    denom = b;
};

//copy constructor
Fraction::Fraction(const Fraction &Another_Fraction , int steps )
{
        num = Another_Fraction.num + steps;
    denom = Another_Fraction.denom + steps;
    printf("in copy constructor \n");
};

void Fraction ::getValue(int &a, int &b)
{
    a = num;
    b = denom;
}

int main()
{
    int num, denom;

    Fraction f(5, 2);
    f.getValue(num, denom);

    cout << "in f(int ,int )\nnum = " << num << endl;
    cout << "denom = " << denom << endl;

    cout << "\nnow second clone copy is being created which increase with +5 in  : " << endl;
    //Fraction f1 = f (also get run if no arg need to pass)
    
    Fraction f1(f , 5); //copy the second obj f into object f1 
    f1.getValue(num, denom);

    cout << "clone num = " << num << endl;
    cout << "clone denom = " << denom;


    cout << "\n\none more clone copy is being created which decrease with -10  : " << endl;
    Fraction f2(f , -10); //copy the second obj f into object f1
    f2.getValue(num, denom );

    cout << "clone num = " << num << endl;
    cout << "clone denom = " << denom;



    return 0;
}