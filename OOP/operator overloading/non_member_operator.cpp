#include <iostream>
using namespace std;

// #define out(a ) cout << a  <<endl`

class Integer;

int add( Integer &obj1 ,  Integer &obj2){
    return obj1.a + obj2.a; 
};

class Integer
{
    int a;
public:
    Integer(int x = 0) : a(x){};

    friend int add (Integer & , Integer &) ;

    friend ostream& operator<<(ostream&, const Integer &);
    friend istream& operator>>(istream&, Integer &);
};

// output stream
ostream &operator<<(ostream &os, const Integer &obj)
{
    os  << obj.a << endl;
    return os;
};

// input stream
istream &operator>>(istream &is, Integer &obj)
{

    cout << "friend  istream& operator>> : \n";

    is >> obj.a;
    return is;
};

int main()
{
    Integer b = 5;
    Integer c;



    cout << "value of Integer b" << b << endl;

    cout << "enter value of Integer c";
    cin >> c;
    cout << "value of Integer c" << c << endl;

    // cout << "sum = " << add(b , c ) <<endl;

    return 0;
}