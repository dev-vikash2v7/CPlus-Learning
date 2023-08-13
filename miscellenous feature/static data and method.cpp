#include <iostream>
using namespace std;

class Employee{
    int id;
//   static  int count=0;     // error: ISO C++ forbids in-class initialization of non-const static member
//static data
static  int count;//this becomes  class property

    public :
        void setData(){
            cout << "enter the id : " ;
            cin>>id;
            count++ ;
        };
        void getData(){
            cout <<"your id is : "<<  id <<endl;
           
        }

        //static member - to accrss only static members
        static void getCount(){
            // cout << id;//error: invalid use of member 'Employee::id' in static member function
             cout << "this is his count : " << count << endl;
        }

};

int Employee :: count ; // default value is 0

int main()
{
 Employee vk , sh;

//Employee::setData();//error: cannot call member function 'void Employee::setData()' without object
vk.setData();
 vk.getData();

 Employee::getCount();

 sh.setData();
 sh.getData();

vk.getCount();

 
 vk.setData();
 vk.getData();

 sh.setData();
 sh.getData();

  Employee::getCount();

    return 0;
}