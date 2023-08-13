#include <iostream>

//run time polymorphism

using namespace std;
class BaseA{
    
    public:
    int base_var=1;
        void virtual display(){
            cout << "display() of BaseA class\n" << "a. base_var" << " = " << base_var <<endl<<endl;
        };
};

class DerivedC : public BaseA {
  public:
  int derived_var = 100;
  void display(){
        cout << "display() of DerivedC class \n" ;
        cout << "b. base_var " << " = " << base_var <<endl;
      cout << "b. derived_var" << " = " << derived_var <<endl<<endl;
  };
};

int main()
{
    BaseA *ptr_baseA ;
 
    
    DerivedC derived_C;
    DerivedC *ptr_derived_C;
    
    ptr_baseA = &derived_C;
    
// ptr_derived_C->derived_var = 200;
// ptr_derived_C->base_var = 300;
// ptr_derived_C->display();


 ptr_baseA->display(); //with virtual it will call the derived_C members otherwise it will have default behaviour
    return 0;
}
