#include <iostream>
using namespace std;

//base class -> Super
class Super
{
private:
    int a;

protected:
    //protected data and members only be visible to subclass
    void printInfo();

public:
    Super(int x = 0) : a(x)
    {
        cout << "super constructor called " << endl;
        cout << "a = " << a << endl;
    };
    ~Super()
    {
        cout << "super destructor called !!" << endl;
    };
    void print();
};

//subclass Sub
class Sub : public Super
{
private:
    int b;

public:
    Sub(int y = 0) : Super(y), b(y + 10)
    {
        cout << "sub constructor called " << endl;
        cout << "b = " << b << endl;
    };

    ~Sub()
    {
        cout << "sub destructor called \n";
    };
    void printInfo();
};

//protected member of Super
void Super ::printInfo()
{
    cout << "in protected printinfo() of Super base class " << endl;
    cout << "a = " << this->a << endl;
    cout << "size of data component of super class is : " << sizeof(this->a) << endl;
}

void Sub ::printInfo()
{

    cout << "in protected printinfo() of Sub class " << endl;
    cout << "b = " << this->b << endl;
    cout << "size of data component of sub class is : " << sizeof(this->b) << endl;

    Super::printInfo();
}

//public member of Super
void Super ::print()
{
    cout << "print() member of super class in public " << endl;
    /*
    this function in turn calls printInfo() , 
    Super()::print() is a public interaface callable by anybody whereas .
     Super::printinfo() is protected interface , therefor callable by subclass member function and friends
     */
    this->Super ::printInfo();
};

int main()
{
    Sub sub(50);
    cout << endl;

    Super super(100);
    cout << endl;
    // super.printInfo(); //  error: 'void Super::printInfo()' is protected within this context
    sub.printInfo();

    cout << endl;

    super.print();

      cout << endl;


    cout << "size of super is : " << sizeof(super) << endl; // sizeof(a) => 4
    cout << "size of sub is : " << sizeof(sub) << endl; //sizeof(super) + sizeof(b) = 4 + 4 = 8
    // sub.print();

    cout << endl;
    return 0;
}