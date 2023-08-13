#include <iostream>
using namespace std;
#define Max 4

//passing objects as function
class Complex{
    int a , b ;

public:
    void setData(int v1 , int v2 ){
        a  = v1 ;
        b = v2 ; 
    }
    void setDataBySum(Complex o1 , Complex o2){
        a= o1.a + o2.a;
        b= o1.b + o2.b;
    }
    void printNumber(){
        cout << "your complex number is : " << a << "+"<<b <<"i" <<endl;
    }
};

//use of array
class Employee{
    int id;

    public :
        void setData(){
            cin>>id;
        };
        void getData(){
            cout <<"your id is : "<<  id <<endl;
        };
};


int main()
{
//  Employee fb[Max];

// for(int i = 0 ; i < Max ; i++){
//     cout << "enter id of emp " << i+1 << " : " ;
// fb[i].setData();
// }

// for(int i = 0 ; i < Max ; i++){
//  fb[i].getData();

Complex c1,c2,c3;

c1.setData(3,4);
c1.printNumber();

c2.setData(6,8);
c2.printNumber();

c3.setDataBySum(c1,c2);
c3.printNumber();







    return 0;
}