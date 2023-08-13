#include <iostream>
using namespace std;

class Emp{
    public:
      char *whoAmI() = 0 ; // pure virtual function
};


class Manager : public Emp{
    public:
    string whoAmI() {return "manager";}; // pure virtual function
};


// class codder : public Emp{
//     public:
//         char *whoAmI() = 0 ; // pure virtual function
// };


// class tester : public Emp{
//     public:
//         char *whoAmI() = 0 ; // pure virtual function
// };
int main()
{
    Emp *emp = new Emp[10] ;

    emp[0] = new  Manager;
// emp[0]->whoAmI();
    return 0;
}