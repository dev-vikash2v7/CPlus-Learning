#include <iostream>

using namespace std;

class X{
    
public :  
 void  f(){
     cout << "f() of base class X " << endl ;
 };
    
};

class Y : public X{
// public :  
//  void  fy(){
//      cout << "f() of derived class Y from class X " << endl ;
     
//  };
    
};

class Z :public Y {
public :  
     void  f(){
        //  f(); //calls Z::f()
         cout << "f() of derived class Z from class Y " << endl ;
         Y::f(); // call's Y's fy() i.e inherited from X . since Y is an indirect superclass of Z
       X::f(); //call's  X's fx() , since X is an indirct superclass of z
      
     };
         
     
};


int main()
{
    Z obj;
    obj.f(); //calls Z::fz() because z's fz() supersclass
  cout << "hello world"<<endl ;
    return 0;
}
