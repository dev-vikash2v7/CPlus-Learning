#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int img;

    Complex(int r, int i)
    {
        real = r;
        img = i;
        cout << real << " + " << img << "i" << endl;
    };

    void print();
   

    void operator+(const Complex c)
    {

        cout << "operator overloadin for + operator called ;\n";

        int real_sum = real + c.real;
        int img_sum = img + c.img;

        cout << real_sum << " + " << img_sum << " i" << endl;
    }

    void operator-(const Complex c)
    {

        cout << "operator overloadin for - operator called ;\n";

        cout << real - c.real << " + " << img - c.img << " i" << endl;
    }

    Complex operator *(const Complex c1 ){
        cout << "operator overloadin for * operator called ;\n";
        Complex c(real * c1.real, img * c1.img);
        return c;
    }

//     Complex operator -(){
// Complex c(-real , -img);
//         return c;
//     }
};

void Complex :: print(){
    cout << "hello\n";
}


int main()
{
    Complex c1(4, 9); // 4 + 9i
    Complex c2(2, 3); // 2 + 3i

    // cout << "sum " << endl;
    // c1 + c2;

    // cout << "subtraction " << endl;
    // c1 - c2;

    // Complex c3 = c1 * c2;


    c1.print();

    return 0;
}