#include <iostream>
using namespace std;

class A{
    public:
        virtual void f();
};
class B : public A{
    public:
        void f(); //private by default
};

int main()
{
    B b;
    // A *ptra = &b;
    // A *ptrb = &b;

    // ptra->f();
    // ptrb->f();
    return 0;
};