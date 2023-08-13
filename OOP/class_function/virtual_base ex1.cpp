#include <iostream>

using namespace std;
/*
* in virtual keyword can be used in front of the base class specifiers in the base lists of classes inherited_1 AND inherited_2

* this indicates that a single subobject of the virtual base class is
shared by every base class that specified the base class to be virtual 

here object instance of class subchild has single shared subobject of class parent
*/

class parent
{
  public:
  int ac1 = 4;
  
    parent ()
  {
    cout << "in parent class\n";
  }

  void print ()
  {
    cout << "print() from parent\n";
  };
  
    ~parent ()
  {
    cout << "//------------in parent class destructor-------//\n";
  }
};

//virtual base class
class inherited_1:virtual public parent //public virtual parent
{
public:
  inherited_1 ()
  {
    cout << "in inherited_1 class\n";
  };
  
//   void print ()
//   {
//     cout << "print() from inherited_1\n";
//   };
  
  ~inherited_1 ()
  {
    cout << "//-----------------------in inherited_1 class destructor-------------------//\n";
  };
};


//virtual base class
class inherited_2 :public  parent
{
public:

  inherited_2 ()
  {
    cout << "in inherited_2 class\n";
  };

  void print ()
  {
    cout << "print() from inherited_2 \n";
  };
  
   ~inherited_2 ()
  {
    cout << "//-------------in inherited_2 class destructor-----------------//\n";
  };
};

//non-virtual base class
class inherited_3 : public parent{
    public:
    
     inherited_3 ()
  {
    cout << "in inherited_3 class\n";
  };

  void print ()
  {
    cout << "print() from inherited_3 \n";
  };
  
   ~inherited_3 ()
  {
    cout << "//-------------in inherited_3 class destructor-----------------//\n";
  };
    
};

class subchild : public inherited_1 , public inherited_2 ,public inherited_3
{
public:
  subchild ()
  {
    cout << "in subchild class\n";
  };
  
//   void print ()
//   {
//     cout << "/nprint() from subchild\n";
//   };
//   void f(){
//       // parent::print();  // error: ‘parent’ is an ambiguous base of ‘subchild’
//   inherited_1::print();
//       inherited_2::print();
//   };
  
    ~subchild ()
  {
    cout << "//-----------------------in subchild class destructor------------------//\n";
  };
};

int main ()
{
    subchild sub;
    
    //if virtual not present thiswill show
    // error: request for member ‘print’ is ambiguous
    sub.print();

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
