#include <iostream>
using namespace std;

class Fraction
{
private:
    int num, denom, g;

public:
    Fraction(int = 0, int = 1);
    Fraction(const Fraction &); // copy constructor

    friend ostream &operator<<(ostream &, const Fraction &);

    int gcd();
    int gcd(int a, int b);

    Fraction operator+(Fraction); //+ operator
    // Fraction operator-(Fraction); //- operator
    Fraction operator=(Fraction); //= operator
    ~Fraction();
};

ostream &operator<<(ostream &output, const Fraction &object)
{
    output << " ( " << object.num << " / " << object.denom << " ) ";
    return output;
};

Fraction::Fraction(int n, int d)
{
    //  cout << "\nin constructor \nbefor fraction =  " << n << " / " << d << endl;

    g = gcd(n, d);

    n /= g;
    d /= g;

    this->num = n;
    this->denom = d;

    cout << "after fraction =  " << this->num << " / " << this->denom << endl
         << endl;
}
 
Fraction Fraction ::operator+(Fraction object_2)
{
    Fraction temp;

   cout << "Fraction Fraction ::operator+(Fraction object_2)\n";

    temp.num = this->num * object_2.denom + this->denom * object_2.num;
    temp.denom = this->denom * object_2.denom;

    g = temp.gcd();

    temp.num /= g;
    temp.denom /= g;

    return temp;
}

Fraction Fraction ::operator=(Fraction object_2)
{
    this->num =  object_2.num;
    this->denom =  object_2.denom;

   cout << "Fraction Fraction ::operator=(Fraction object_2)\n";
    cout << "num =  " << this->num << endl<< "denom = " << this->denom << endl;
    cout << "num =  " << object_2.num << endl<< "denom = " << object_2.denom << endl<<endl ;
    
    return *this;
}


Fraction ::Fraction(const Fraction &object_2)
{
    this->num = object_2.num;
    this->denom = object_2.denom;
}

Fraction::~Fraction()
{
    // cout << "fraction object /-----destroyed-------/ \n";
    // cout << "num =  " << this->num << endl<< "denom - " << this->denom << endl
    //      << endl;
}

int Fraction ::gcd()
{
    int a = this->num;
    int b = this->denom;

    int min = a < b ? a : b;
    int gcd = 1;

    for (int i = 2; i < min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int Fraction ::gcd(int a, int b)
{
    int max = a < b ? a : b;
    int gcd = 1;

    for (int i = 2; i < max / 2; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int main()
{
    Fraction f1(3, 4);
    Fraction f2(5, 6);
    // Fraction f3(8, 9);

    Fraction temp;
    temp = f1 + f2;

    
    cout  << f1 << " + " << f2 << " = " << temp << endl;
    return 0;
}
