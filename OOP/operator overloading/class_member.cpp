#include <iostream>
using namespace std;

class Y
{
public:
Y(){
    cout << "class Y called\n";
}
    void f()
    {
        cout << "class Y f() called\n";
    };
};
class X
{
public:
X(){
    cout << "class X called\n";
}

    Y*operator->(){
        cout << "class X  Y*operator->() called\n";
    };
};


int main()
{
   X x;
   x->f(); //here it is interupted as  => (x.operator->())->f()

    return 0;
}
/*
// overloaded class member access

+) an exp cont the class member access -> operator has to following syntax :
    identifier -> expression


+) the operator func operator->() must be defined as a nonstatic member function

+) the followinb rest apply to class member access operators ;

1> an overloaded arrow operaotr cannot be declared as a nonmember func
2> the class member access .(dot) operator coannt obe overloaded 
*/