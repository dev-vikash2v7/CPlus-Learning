#include <iostream>
using namespace std;

class A
{
public:
  static int n;
    A()
    {
        n++;
        cout << "in constructor with n = " << n << endl;
    };
    ~A()
    {
        n--;
        cout << "in destructor with n = " << n << endl;
    };
};

int A::n = 0;

int main()
{
    A a; //n = 1
    cout<<endl; 
    A b[5];   //    n+=5
        cout<<endl;
    A *c = new A; //n++

    cout << a.n << endl ; //7

         delete c; //--n = 6
         //in destructor with n = 6

          cout <<A::n<<endl;// n=6

         //in destructor with n = 5
         //in destructor with n = 4
         //in destructor with n = 3
         //in destructor with n = 2
         //in destructor with n = 1
         //in destructor with n = 0

    return 0;
}

//destructor will automatically called while in ptr we have to use it explicitly withut it cannot be destroyed