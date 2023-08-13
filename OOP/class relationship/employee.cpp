#include <iostream>
#include <string>

using namespace std;

class Employee
{

private:
    int bonus, performance;

public:
    int salary, age;
    char name;
    void setdata(float bonus, int performance); //declaration

    void getdata()
    {
        cout << "public data : \nname : " << name << endl
             << "salary : " << salary << endl
             << "age : " << age << endl
             << endl;

        cout << "private data : \nbonus : " << bonus << endl
             << "performance : " << performance << endl;
    }
};

void Employee ::setdata(float bonus1, int performance1)
{
    bonus = bonus1;
    performance = performance1;
};

int main()
{
    Employee emp1;

    emp1.name = 'v';
    emp1.salary = 20000;
    emp1.age = 20;

    emp1.setdata(0.1, 4); //private data is only access and set by a function define in it
    emp1.getdata();       //shows the private data

    return 0;
}