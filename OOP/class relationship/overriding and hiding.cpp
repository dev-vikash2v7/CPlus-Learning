#include <iostream>
using namespace std;

class A{
    public:
    virtual void f(){cout << "in class A  f() \n" ;};
    virtual void g(){cout << "in class A  g() \n" ;};
    virtual void h(){cout << "in class A  h() \n" ;};

    void k(){cout << "in class A  k() \n" ;};
};

class B : public A{
    public:
     void f(){cout << "in class B  f() \n" ;};

     void g(int a){
         cout << "in class B  g() with a = " <<a <<endl ;
         };

    // int h(){}; //error: overriding 'virtual void A::h()'
    void k(){ cout << "in class B  k() " <<endl ;};
};

int main()
{
    B b;
    A *ptra = &b ; //derived ptr to base pointer 

    ptra->f(); //B::f() ,   dynamic binding

    //error: no matching function for call to 'A::g(int&)'
    ptra->g(); //A::f() , has different signature , dynamic binding not possible  


    ptra->k(); //  dynamic binding

    return 0;
}
/*
overriding :
        the derived class func is said to override the base class function . only if >
        
      if func sign (not only return type ) are diff , func are  different and virtual mechanism is not invoked. virtual function definition in derived classs connot have different return type s\as defined in the base class
*/