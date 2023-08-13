#include <iostream>

using namespace std;

class Person
{

private:

public:
        char sex = 'M';
        string name;
        int age;

        int sum(int a , int b) return a+b ;

//default
        Person()
        {
                cout << "default Constructor called " << "\n";
        }

//parameterized
        Person(int age){
                cout << "parameterized constructor called " << "\n";
        }

//copy constructor
        Person(const Person &p){
                cout << "Copy Constructor called\n";
                name = p.name ; 
                age = p.sex ; 
                age = p.age ; 
        }

        void show()
        {
                cout << "details of customer are : " << endl;
                cout << "name : " << name << endl;
                cout << "age : " << age << endl;
                cout << "Sex : " << sex << endl;
        }

        ~Person()
        {
                cout << "Destructor called for " << name << "\n";
        }
};

// class Number
// {
//         int num = 0;

// public:
//         Number(){};

//         Number(int a) { num = a; };

//         // when no copy constructor is found , compiler supplies its own copy constrctor
//         Number(Number &obj)
//         {
//                 cout << "copy constructor called\n";
//                 num = obj.num;
//         }

//         void display()
//         {
//                 cout << "your number is  " << num << endl;
//         };
// };

int main()
{


        Person p1(34); // parameterized constructor called

        p1.name = "vikash";
        p1.age = 19;







        Person p2; //default constructor will called

        p2.name = "ADI";
        p2.age = 18;

       Person  p3(p2);


        p1.show();
        p2.show();
        p3.show();
        

        cout << "END OF Programe\n";




        return 0;
}