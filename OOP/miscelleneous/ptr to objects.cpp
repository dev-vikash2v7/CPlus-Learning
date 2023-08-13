
#include <iostream>

using namespace std;

class Complex{
    int real , imaginary ; //data initialse first
    public:
    
    void setData(int a , int b){
        real = a; 
        imaginary = b ;
    };
    void getData(){
        cout << real << " + " << imaginary << "i"<< endl ;
    }
    
};

int main()
{
  
Complex c;
// Complex *ptrc = &c;
////or
Complex *ptrc = new Complex;

(*ptrc).setData(34 , 5);
(*ptrc).getData();
////or
ptrc->setData(34 , 5);
ptrc->getData();



    return 0;
}
