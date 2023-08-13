#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    Number(int x) : num(x){};

    operator float();
    void display() { cout << "num = " << num << endl; };
};
Number ::operator float()
{
    return ((float)this->num);
}

int main()
{
    Number x = 6;
    x.display();

float y = float(x);
cout << y <<endl;
    return 0;
}