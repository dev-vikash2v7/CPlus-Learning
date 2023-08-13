#include <iostream>
using namespace std;

class Fraction
{
public:
    int num;

    Fraction(int a) : num(a);

    Fraction operator*(const Fraction &); // member function

    void show()
    {
        cout << num << endl;
    };
}

Fraction ::operator*(const Fraction &obj)
{
    return this->num * obj.num;
}

// friend Fraction operator/(const Fraction &obj1 ,const Fraction &obj2  ){
//     return obj1.num / obj2.num ;
// }

int main()
{
    Fraction a(10);
    Fraction b(20);
    Fraction temp = a * b;

    temp.show();

    return 0;
};