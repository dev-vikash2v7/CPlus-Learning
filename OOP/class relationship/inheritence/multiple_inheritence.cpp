#include <iostream>

using namespace std;

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


class inherited_1:public parent
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



class inherited_2 : public parent
{
public:

  inherited_2 ()
  {
    cout << "in inherited_2 class\n";
  };

//   void print ()
//   {
//     cout << "print() from inherited_2 \n";
//   };
  
   ~inherited_2 ()
  {
    cout << "//-------------in inherited_2 class destructor-----------------//\n";
  };
};



class subchild : public inherited_1 , public inherited_2 
{
public:
  subchild ()
  {
    cout << "in subchild class\n";
  };
  
  void print ()
  {

  // parent::print ();		//error: ‘parent’ is an ambiguous base of ‘subchild’
    //inherited_1::print ();
    //   inherited_2::print();//error: cannot call member function b
