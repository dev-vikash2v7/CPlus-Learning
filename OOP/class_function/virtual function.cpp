#include <iostream>
using namespace std;

class BaseA
{
public:
    BaseA()
    {
        cout << "in Base A\n";
    };
    virtual void print_f() { cout << "in Base A print_f\n"; };
    virtual void print_g() { cout << "in Base A print_g\n"; };
    virtual void print_h() { cout << "in Base A print_h\n"; };

    void print_k() { cout << "in Base A print_k\n"; };

    // ~BaseA(){cout <<"\n-----------------baseA destructor-----------\n";};
};

class derivedB : public BaseA
{
public:
    derivedB() { cout << "in derived  B of inherit class BaseA\n"; };

    void print_g() { cout << "in derived B print_g\n"; };

    // ~derivedB(){cout <<"\n-----------derived B destructor-----------\n";};
};

class derivedC : public derivedB
{
public:
    derivedC()
    {
        cout << "in derived  C of class derivedB\n";
    };

    void print_h() { cout << "in derivedC C print_h\n"; };
    void print_k() { cout << "in derivedC C print_k\n"; };

    void print_l() { cout << "in derived C print_l\n"; };

    // ~derivedC(){cout <<"\n-----------------derived C destructor-----------\n";  };
};

int main()
{
    // system("clear");

    // BaseA *A =  new derivedC ;
    // derivedB B ;
    derivedC c;

    BaseA *ptra = &c;

    puts("");

    //without virtual
    // ptra->print_f();//in Base A print_f
    // ptra->print_g();//in Base A print_g
    // ptra->print_h();//in Base A print_h
    // ptra->print_k();//in Base A print_h
    // ptra->print_l();//error: 'class BaseA' has no member named 'print_l';

    //with virtual() in f,g,h
    ptra->print_f(); //in Base A print_f
    ptra->print_g(); //in Base B print_g
    ptra->print_h(); //in derivedC C print_h
    ptra->print_k(); //in Base A print_k
    ptra->print_l(); //error: 'class BaseA' has no member named 'print_l';

    return 0;
}

/*
# a virtual function cannot be global or static .

#virtual function  :  By definition , a virtual func iis a member function of a base classs and relies on a specific object ot determine which implementation of the function is called . a virtual funct can be declared a friend of another class.

# dynamic binding : 
                at runtime , the statement is evaluated depending on the type of the particular function depending on the type of object created or referred at runtime  . 

                this method of dynamic decision of call to a particular function depending on the type of object created is clalled dynamic binding.

#(vtpr) =>  internally it maintains a virtual func table (vtbl) stores a table of function pointers, which have been         declared as  virtual . this pointer to the vtbl called vptr resides in the storage of the object.'

# func in derived classes override virtual fnct in base classes only if their type that is ,no. if args , type of args, and order of args are same .

# a func in derived cannot be differ from a virtual func in a base class in its return type only; the arg list must differ as well when calling a fundction using pointers or references k the following rules apply;

1. a call to a virtual function is resolved according to the underlying type of object for which it is called 

2 . a call to a nonvirtual function is resolved acc to the type of the pointer or reference4



*/