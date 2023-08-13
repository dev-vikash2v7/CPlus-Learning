#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

class Emp
{
public:
    static int count;
    int number; // total number of objects created
    string name;
    int age;
    string address;
    string phone;

    string myToString();

    ~Emp() { cout << "emp destroyed " << name << endl; };
};

int Emp::count = 1; // static data member initialised

// convert all data types to string
string Emp ::myToString()
{
    string str;
    ostringstream os;
    os << "Emp No : " << number<<endl;
    os << "Name : " << name<<endl;
    os << "Age : " << age<<endl;
    os << "Address : " << address<<endl;
    os << "phone : " << phone<<endl;

    str = os.str();
    return str;
}
int main()
{
    Emp emp1 , emp2;

    emp1.name = "vikash";
    emp1.address = "singaji colony";
    emp1.phone = "8817956935";
    emp1.age = 18;
    emp1.number = 1;

    emp2.name = "shivam";
    emp2.address = "singaji colony";
    emp2.phone = "8889012503";
    emp2.age = 18;
    emp2.number = 2;

 cout <<    emp1.myToString() << endl << emp2.myToString() << endl;

    return 0;
}