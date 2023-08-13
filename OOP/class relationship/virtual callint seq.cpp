#include <iostream>
using namespace std;

class parent_A
{
    int a;//260 + 10 = 270 , 360 + 10 = 370

public:
    parent_A(int x) : a(x + 10)
    {
        cout << "class parent_A constructor called  with A::a = " << a << endl;//1> 270 , 3>370
    };
    ~parent_A()
    {
        cout << "//---------------class parent_A destructor-----------//\n";
    }
};

class parent_B
{
    int b;

public:
    parent_B(int x) : b(x + 20)
    {
        cout << "class parent_B constructor called  with B::a = " << b << endl;//1190
    };
    ~parent_B()
    {
        cout << "//---------------class parent_B destructor-----------//\n";
    }
};

class inherited_C :public virtual  parent_A, public virtual parent_B
{
    int c;//220+30 = 250 ,

public:
    inherited_C(int x) : c(x + 30), parent_A(x + 40), parent_B(x + 50)
    {
        cout << "class parent_A constructor called  with C::c = " << c << endl;//2>250
    };
    ~inherited_C()
    {
        cout << "//---------------class inherited_C destructor-----------//\n";
    }
};

class inherited_D :  public virtual parent_A , public virtual parent_B
{
    int d; //230+60 = 290

public:
    inherited_D(int x) : d(x + 60), parent_A(x + 70), parent_B(x + 80)
    {
        cout << "class inherited_D constructor called  with D::d = " << d << endl;
    };
    ~inherited_D()
    {
        cout << "//---------------class inherited_D destructor-----------//\n";
    };
};



class subchild_E : public inherited_C, public inherited_D
{
    int e; //100 + 90 = 190

public:
    subchild_E(int x) : e(x + 90), inherited_C(x + 120), inherited_D(x + 130)
    {
        cout << "class subchild_E constructor called  with E::e = " << e << endl; //1090
    };
    ~subchild_E()
    {
        cout << "//---------------class subchild_E destructor-----------//\n";
    };
};



int main()
{
    
    subchild_E obj(100);


    return 0;
}



/*
without virtual class :

class parent_A constructor called  with A::a = 270        
class parent_B constructor called  with B::a = 290        
class parent_A constructor called  with C::c = 250        
class parent_A constructor called  with A::a = 310        
class parent_B constructor called  with B::a = 330        
class inherited_D constructor called  with D::d = 290     
class subchild_E constructor called  with E::e = 190  

//---------------class subchild_E destructor-----------// 
//---------------class inherited_D destructor-----------//
//---------------class parent_B destructor-----------//
//---------------class parent_A destructor-----------//
//---------------class inherited_C destructor-----------//
//---------------class parent_B destructor-----------//
//---------------class parent_A destructor-----------//

with virtual class :


*/