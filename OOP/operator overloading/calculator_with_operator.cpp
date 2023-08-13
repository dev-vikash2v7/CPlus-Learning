#include <iostream>
using namespace std;

class Integer
{
        int a;

public:
        Integer(int x) : a(x){};

        int display() { return a; };

        Integer operator+(Integer &obj)
        {
                return this->a + obj.a;
        };
        Integer operator-(Integer &obj)
        {
                return this->a - obj.a;
        };
        Integer operator*(Integer &obj)
        {
                return this->a * obj.a;
        };
        Integer operator%(Integer &obj)
        {
                return this->a % obj.a;
        };
        Integer operator/(Integer &obj)
        {
                return this->a / obj.a;
        };

        Integer operator++()
        {
                return ++a;
        };
        Integer operator++(int)
        {
                Integer tmp = a++;
                return tmp;
        };
        Integer operator--()
        {
                return --a;
        };
        Integer operator--(int)
        {
                Integer tmp = a--;
                return tmp;
        };
};

int main()
{
        Integer a = 5;
        Integer b = 7;
        Integer c = a + b;

        cout << "add : " << (a + b).display() << endl;
        cout << "sub  : " << (a - b).display() << endl;
        cout << "div : " << (a / b).display() << endl;
        cout << "mul : " << (a * b).display() << endl;

        cout << "pre increment\n";
        cout << (++a).display() << endl;

        cout << "post increment\n";
        cout << (a++).display() << endl;
        cout << (a).display() << endl;
        return 0;
}