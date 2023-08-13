#include <iostream>
using namespace std;

class class_A
{
private:
    int a = 5;
    //by default it is in private

public:
    //public member function class_f() returns the copy of instanece data "a" (which is private)
    // int a = 56; //error ::: cannot declare variable wiht same name as in private also cannot modified it
    void show()
    {
        a = 89;
        cout << a << endl;
    };
};

struct struct_X
{
    // public mode by default
    int a = 45;
    void show()
    {
        cout << a << endl;
    };

private:
    int b = 7887;
};

struct struct_Y
{
    int m = 45;
    void display()
    {
        cout << m << endl;
    };
}


main()
{
    class_A obj1;
    struct_X obj2;

    class struct_Y y; //struct_Y becomes the name of the class , y is the name of the obj instance.
    //y can be access sice it is in public mode in struct_Y
    y.m = 54;
    y.display();

    //  obj1.a = 45; //error: 'int class_A::a' is private within this context
    obj1.show();

    obj2.a = 45;
    obj2.show();

    //obj2.b; // error :  error: 'int struct_X::b' is private within this context  obj2.b

    return 0;
}