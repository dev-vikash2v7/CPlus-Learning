#include <iostream>
using namespace std;

//single arg to convert from the arg type to the type of the class
class Storage
{
    int a , b;
    char* c;

public:
    Storage(int x) ;
    Storage(const char* n , int j =0);
    void display() { cout <<  a << "  ,  "  << b << endl; };
};

void func(Storage);

// Storage ::operator float()
// {
//     return ((float)this->num);
// }

int main()
{
   Storage o1 =2 ;// o1 = Storage(2)
   Storage o2 ="string" ;// o1 = Storage("string",0)
   o1 = 10; //o1 - storage(10)
   func(5);//func(storage(5))

    return 0;
}