#include <iostream>
using namespace std;

class A{
    public:
    virtual void f(){cout << "in class A  f() \n" ;}; //dynamically bound with virtual
    virtual void g(){cout << "in class A  g() \n" ;};
    virtual void h(){cout << "in class A  h() \n" ;};

    void k(){cout << "in class A  k() \n" ;}; //statically bound in A
};

class B : public A{
    public:
     void g(){ cout << "in class B  g() " <<endl ; };
};

class C : public B{
    public:
     void h(){ cout << "in class C  h() " <<endl ; };//overrides A's h()
     void k(){ cout << "in class C  k() " <<endl ; }; //hide's A k()
};

int main()
{
   C c;
    A *ptra = &c ; //derived ptr to base pointer 

ptra->f(); //A::f() /  because not redefined in B or C  
ptra->g(); //B::g() /redifined in B  
ptra->h(); //C::h() / redifeined in C
ptra->k(); //A::k() / k is statically bound in A


    return 0;
}
/*
# dynamically binding => 
at runtime the statement is evaluated depending on the type of the object created or referred at runtime. this func of dynamic decision of call to a particular function depending on the type of the object created or referred at runtime. 

# this function of dynamic decision of call to a particular func depending on the type of object created is called dynamic binding

# in c++ only non-static virtual member functions are overridable 

static or early bindinding =>
                         when compiler knows the exact function body at the time of translating a  function call it can bind the call to the approprate function body. t


C -> static binding
c++ -> dynamic binding 

# when calling a function using reference the following rules apply: 

1. a call to an overridable function is resolved acc to the underlying type of object for which it is created ( dynamic type)

2. a call to non-overridable func is resolved acc to the type of the object as decoared *9tatic type)

#overridable function =>

*it cannot be private , non-virtual or static.
* it is a member function of abase class and relies on a specific objec to determine which implementation of the function is called

*/