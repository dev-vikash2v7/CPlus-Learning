#include <iostream>

using namespace std;
/*
* in virtual keyword can be used in front of the base class specifiers in the base lists of classes inherited_1 AND inherited_2

* this indicates that a single subobject of the virtual base class is
shared by every base class that specified the base class to be virtual 

here object instance of class subchild has single shared subobject of class parent
*/

class parent1
{
  public:
    parent1 ()
  {
    cout << "in parent1 class\n";
  };

  void print1 ()
  {
    cout << "print1() from parent1\n";
  };
  
    ~parent1 ()
  {
    cout << "//------------in parent1 class destructor-------//\n";
  };
};

//base class 2
class parent2
{
  public:
    parent2 ()
  {
    cout << "in parent 2 class\n";
  };

  void print2 ()
  {
    cout << "print-2() from parent2\n";
  };
  
    ~parent2 ()
  {
    cout << "//------------in parent2 class destructor-------//\n";
  };
};


//virtual base class
class inherited_1 : public parent1  ,virtual  public parent2 
{
public:
  inherited_1 ()
  {
    cout << "in inherited_1 class\n";
  };
  
  
  ~inherited_1 ()
  {
    cout << "//-----------------------in inherited_1 class destructor-------------------//\n";
  };
};


//virtual base class
class inherited_2 :public parent1  ,virtual  public parent2 
{
public:

  inherited_2 ()
  {
    cout << "in inherited_2 class\n";
  };

  
   ~inherited_2 ()
  {
    cout << "//-------------in inherited_2 class destructor-----------------//\n";
  };
};


class subchild : public inherited_1 , public inherited_2 {

public:
  subchild ()
  {
    cout << "in subchild class\n";
  };
  
void f(){
    // print1(); //error: reference to ‘print1’ is ambiguous .. because it is not virtual in inheritence
    print2();
    
};
  
    ~subchild ()
  {
    cout << "//-----------------------in subchild class destructor------------------//\n";
  };
  
};


int main ()
{
    subchild sub;
    
    // sub.f();

  return 0;
}

//sequence of calling 
/*
            |----virtual inherited_1----------
    subchild                                parent
        |    |----virtual inherited_2 --------           
        |
        |-------------inherited_3 ----------parent
        
        IN ABOVE EX CLASS subchild HAVE TWO SUBOBJECTS OF CLASS parent . ONE IS SHARED BY CLASS (inherited_1 AND inherited_2) AND AND
    ANOTHER IS SHARED BY (inherited_3) ;
    
    if any member wants to access member print() of parent it should be unambigiously referred to as either of ( inherited_1::print() or inherited_2::print() as the case may be.
    
    in case any ambuiguity to access any member it should bye qualified with appropriate class name with scope resolution operator so that
     the access can be unambiguous,
            
           
*/
