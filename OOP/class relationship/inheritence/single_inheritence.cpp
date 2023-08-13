#include <iostream>

using namespace std;

class parent{
    public :
    int ac1=4;
    parent(){
        cout << "in parent class\n";
    }
    
     void print(){
        cout << "print() from parent\n" ; 
    };
};

class inherited_1 : public parent{
    public:
    inherited_1(){
    cout << "in inherited_1 class\n";
    };
  void print(){
        cout << "print() from inherited_1\n" ; 
    };
};

class inherited_2 : public parent{
     public:
     
     inherited_2(){
         cout << "in inherited_2 class\n";
     };
     
   static  void print(){
        cout << "print() from inherited_2\n" ; 
    };
};

class subchild : public inherited_1  {
    public:
    subchild(){
        cout << "in subchild class\n";
    };
   void print(){
       
       parent::print(); //error: ‘parent’ is an ambiguous base of ‘subchild’
       inherited_1::print();
    //   inherited_2::print();//error: cannot call member function ‘void parent::print()’ without object
       
        cout << "print() from subchild\n" ; 
    };
};

int main()
{
    subchild sub ;
     sub.print();
    
cout << "\n";
    inherited_2 k;; //it is static void 
    
 

    return 0;
}
