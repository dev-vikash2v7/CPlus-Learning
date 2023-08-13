#include <iostream>
using namespace std;

#define out(a, b ) cout << a << " " << b  <<endl
class Integer
{
    int a;

public:
    Integer(int x) : a(x){};
    Integer(const Integer&); //copy constructor

    Integer& operator=(const Integer &) ; //= operator

    int display() { return a; };

    Integer operator+(const Integer obj);

    operator int() ; //cast operator to int

    Integer operator++(int) // postfix increment
    {
        Integer tmp = a++;
        out(" operator++(int) : " , this->a);
        return tmp;
    };
    Integer operator++() // prefix increment
    {
        ++a;
        out(" operator++() : " , this->a);
        return a;
    };

    Integer operator--();
    Integer operator--(int);
};

//copy const
Integer :: Integer(const Integer &arg){
    this->a = arg.a;
out("in copy constructor Integer(const Integer &arg)" , this->a);
}

//= operator
Integer& Integer :: operator=(const Integer &arg){
    this->a = arg.a ;
    out("Integer :: operator=(const Integer &arg)" , this->a);
    return (*this);
}
//+ operator
Integer Integer :: operator+(const Integer obj){
    Integer tmp = this->a + obj.a;
        // out("Integer :: operator=(const Integer &arg)" , tmp->a);
    return tmp;
}

//prefix
Integer Integer ::operator--()
{
    return --a;
};

//postfix
Integer Integer ::operator--(int)
{
    Integer tmp = a--;
    return tmp;
};

//cast operaor
Integer :: operator int(){
    out("//cast operaor : Integer :: operator int()" , this->a);
    return this->a;
}
int main()
{
int a = 5;
    Integer b = 5;

    b = ++b + b++;//12 => 7 + 5
    out("b = " , b );
    // a = ++a + a++;//13 => 
    // out("a = " , a );

    // cout << "pre increment\n";
    // cout << (++a).display() << endl;

    // cout << "post increment\n";
    // cout << (a++).display() << endl;
    // cout << (a).display() << endl;

    // a.operator--();//prefix
    // a.operator--(0);//postfix
    //  cout << a.display() << endl;



    return 0;
}