#include <iostream>
using namespace std;

class Fraction
{
private:

public:
    int num, denom;
    Fraction(int = 0, int = 1);
    Fraction(const Fraction &);
    Fraction operator-();
 
    ~Fraction();
};

Fraction::Fraction(int n, int d)
{
    //  cout << "\nin constructor \nbefor fraction =  " << n << " / " << d << endl;
this->num = n;
this->denom = d;
   
}
 
Fraction Fraction ::operator-()
{
    Fraction temp;
temp.num = -this->num;
temp.denom = -this->denom;
   cout << "Fraction Fraction ::operator-()\n";

    return temp;
}




Fraction ::Fraction(const Fraction &object_2)
{
    this->num = object_2.num;
    this->denom = object_2.denom;
};

Fraction::~Fraction(){   // cout << "fraction object /-----destroyed-------/ \n";
};


int main()
{
    Fraction f1(4,2) ,  f2 ;
      f2 = -f1;
    
    cout  << f2.num << " , " << f2.denom << endl;
    return 0;
}
