
#include <iostream>

//run time polymorphism

using namespace std;
class BaseA{
    
    public:
    int a=1;
        void display(){
            cout << "display() of BaseA class\n" << "a" << " = " << a <<endl;
        };
};

class DerivedC : public BaseA {
  public:
  int b = 60;
  void display(){
      cout << "display() of DerivedC class\n"<< "b" << " = " << b <<endl;
  }
};
int main()
{
    BaseA *ptr_baseA ;
    BaseA baseA ;
    
    DerivedC derived_C;
    
    ptr_baseA = &derived_C;
    
     ptr_baseA->a= 23;
    ptr_baseA->display(); //this called late binding as pointer is of type BaseA   
    
   // ptr_baseA->b= 123; //this will throw error .. error: ‘class BaseA’ has no member named ‘b’
  
DerivedC *ptr_derived_C;
ptr_derived_C = &derived_C; //this can inherit the BaseA class as well as of its own class

ptr_derived_C->a = 3000;

ptr_derived_C->display();
 ptr_baseA->display();
    return 0;
}
