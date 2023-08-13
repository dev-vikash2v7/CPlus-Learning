#include <iostream>
using namespace std;

class parent {
    public:
        int a= 6969;
};

class inherited1 :public parent{

};

class inherited2 :public parent{

};

class subchild : public inherited1 , public inherited2{
    public:
    int a;
    void f();
};

void subchild :: f(){
    //we have 2 copies of parent subobject in subchild f();
    // a = 10 ; //error: reference to 'a' is ambiguous
    a= 1;

    inherited1 :: a = 10 ;
    inherited2 :: a = -10 ; 
  cout << "subchild function()" << endl;

};

int main()
{
    subchild *sub_obj = new subchild ;

    parent *inherited1_obj = (parent *) (inherited1 *)  sub_obj;

parent *inherited2_obj = (parent *) (inherited2 *)  sub_obj;

parent *parent_obj = new parent ; 

    // parent *parent_obj = sub_obj;//error: 'parent' is an ambiguous base of 'subchild'

    //even the typecasting could not help
//  parent_obj = (parent * ) sub_obj; //error: 'parent' is an ambiguous base of 'subchild'


    sub_obj->f();
    //obj.a ; // error: request for member 'a' is ambiguou

   cout <<    parent_obj->a << endl ;
   cout <<    inherited1_obj->a << endl ;
   cout <<    inherited2_obj->a << endl ;
   cout <<    sub_obj->a << endl ;
    
    return 0;
}

/*
            ---------parent --------
            |                      |
        inherited1             inherited2
            |_________   __________|     
                   subchild

*/