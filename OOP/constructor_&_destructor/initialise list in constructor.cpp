
#include <iostream>

using namespace std;

class Test{
    int data1 , data2 ; //data initialse first
    public:
    //Test() : initialisation-section
    //  Test(int a , int b)  : data1(a) , data2( data1 + b){  //correct : as data1 declare first therefor data2 will store data1
        Test(int a , int b)  :  data2( b) , data1(a + data2) { //this will create problem as data1 initialse first therefor data2 will have garbage value
         cout << "constructor executed \n";
         cout << data1 <<endl <<data2 <<endl;
     }
};

int main()
{
  
Test t(2,3);
    return 0;
}
