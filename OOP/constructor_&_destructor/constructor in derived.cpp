
#include <iostream>

using namespace std;
/*
case1:
    class A : public B
    order => B -> A ;
    
case2:
    class A : public B , public C;
    order => B -> C -> A
    
case3:
     class A : public B ,virtual public C;
     order => C -> B -> A
*/
class BaseA{
    int data_A = 5 ;
    public:
        BaseA(int a){
            data_A = a;
            cout << "const of BaseA called" <<endl;
        };
        void printA(){
            cout << "value of data_a = " << data_A<< endl;
        }
};
class BaseB{
    int data_B = 5 ;
    public:
        BaseB(int b){
            data_B = b;
            cout << "const of BaseB called" <<endl;
        };
        void printB(){
            cout << "value of data B = " << data_B << endl;
        }
};

class derivedC :virtual public BaseA , public virtual BaseB{
    int data_1  ,data_2  ;
    public:
        derivedC(int a , int b , int c , int d) : BaseB(a) , BaseA(b){ //order of this does not matter
            data_1 = c ; 
            data_2 = d ;
            cout << "const of derivedC called" <<endl;
        };
        void print(){
            cout << "value of data1 = " << data_1 <<endl;
              cout << "value of data2 = " << data_2 << endl;
        }
};

int main()
{
   derivedC c(1,2,3,4);
   c.print();
   c.printA();
   c.printB();

    return 0;
}
