#include <iostream>

using namespace std;


class Y;

class X{
    int data;
    friend int add(X , Y) ; 
    
    public :
        X(int value) : data(value)
        {
            cout << "data of X is : " << data<< endl;
        };
};


class Y{
    int num;
     friend  int add(X , Y) ; 
    
    public :
        Y(int value) : num(value)
        {
            cout << "data of Y is : " << num << endl;
        };
};
int add(X o1 , Y o2){
    return (o1.data + o2.num);
};


int main()
{
    X a(5);
    Y b(6);
    
    
  cout<<"sum of imaginary Complex : " <<add(a , b) <<endl ;
  
    return 0;
}
