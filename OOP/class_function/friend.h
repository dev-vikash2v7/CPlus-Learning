#include <iostream>
using namespace std;

class Fraction;
void print_fraction(const Fraction &);
void set_fractionToZero(Fraction &);

class BaseA
{
public:
    BaseA(){};
    void print_fraction(const Fraction &);
    void set_fractionToZero(Fraction &);
    ~BaseA(){};
};

class BaseB
{
public:
    BaseB(){};
    void print_fraction(const Fraction &);
    void set_fractionToZero(Fraction &);
    ~BaseB(){};
};

class Fraction
{
    int num, denom;

    //declaring all members as friend
    friend class BaseA;

    //declaring class member individually
    friend void BaseB ::print_fraction(const Fraction &);
    friend void BaseB ::set_fractionToZero(Fraction &);

    //delcaring a function as friend
    friend void print_fraction(const Fraction &);
    friend void set_fractionToZero(Fraction &);

public:
    Fraction(int a = 0, int b = 1)
    {
        this->num = a;
        this->denom = b;
    };

    void print_fraction();
    void set_fractionToZero();

    ~Fraction(){};
};

//members of Fraction
void Fraction ::print_fraction()
{
    cout << "Fraction :: print_fraction() \n" << num << " / " << denom << endl
         << endl;
};

void Fraction ::set_fractionToZero()
{
    cout << "Fraction :: set_fractionToZero() \n";
    num = 0;
    denom = 1;
};

//BaseA is freind of Fraction
void BaseA ::print_fraction(const Fraction &f)
{
    cout << "BaseA :: print_fraction(const Fraction &) \nnum = " << f.num << " denom = " << f.denom << endl
         << endl;
};
void BaseA ::set_fractionToZero(Fraction &f)
{

    f.num = 0;
    f.denom = 1;

    cout << "BaseA :: set_fractionToZero(Fraction &) \nsets fraction to 0\n\n";
};

//this is friend of Fractio
void BaseB ::print_fraction(const Fraction &f)
{
    cout << "BaseB :: print_fraction(const Fraction &) \nnum = " << f.num << " denom = " << f.denom << endl
         << endl;
};

//this is not friend of Fractio
void BaseB ::set_fractionToZero(Fraction &f)
{

    f.num = 0;
    f.denom = 1;

    cout << "BaseB :: set_fractionToZero(Fraction &) is not friend of Fraction as such cannot access private member(num , denom) dclared in Fraction \n\n";
};

//this is  not friend of Fraction
void print_fraction(const Fraction &f)
{
    cout << "print_fraction(const Fraction &f) is not friend of Fraction as such cannot access private member(num , denom) dclared in Fraction \n\n";
};

//this is friend of Fractio
void set_fractionToZero(Fraction &f)
{
    f.num = 0;
    f.denom = 1;
    cout << "set_fractionToZero(Fraction &f)\nsets fraction to 0\n\n";
};