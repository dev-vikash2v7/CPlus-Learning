#include <iostream>
using namespace std;

//one can define a member function of a class that is called a  cast operator

//cast operator takes no arg and the return type is implicitly the conversion type
class Storage
{
    int  b;

public:
    operator int();
    void display() { cout <<  b << endl; };
};

Storage :: operator int(){
    return b;
}

void f(Storage obj){
    //each value assignes is converted by Storage::operator int()
    int i = int(obj);
    int j = (int) obj;
    int k = i + obj;
}
// Storage ::operator float()
// {
//     return ((float)this->num);
// }

int main()
{


    return 0;
}