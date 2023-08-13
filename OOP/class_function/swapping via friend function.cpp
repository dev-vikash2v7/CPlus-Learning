#include <iostream>

using namespace std;


class Y;

class X{

    friend  void swap(X &, Y &) ; 
       int data;
    public :
     
        X(int value) : data(value)
        {
            cout << "data of X is : " << data<< endl;
        };
        
        void display(){
            cout <<"value of X is "<< data << endl ;
        };
};


class Y{
   int num;
     friend  void swap(X &, Y &) ; 
    
    public :
 
        Y(int value) : num(value)
        {
            
            cout << "data of Y is : " << num << endl;
        };
        
        
        void display(){
            cout <<"value of Y is " << num << endl ;
        };
};

void swap(X &a , Y &b){ //copy of object will have without reference with & and value does not save after swapping
    int temp = a.data ;
    a.data = b.num ;
    b.num = temp ; 
};


int main()
{
    cout << "before swap \n" ;
    X obj_a(5);
    Y obj_b(6);
    
    
  cout<<"\nafter swap \n" ;
    
swap(obj_a , obj_b);
    
  obj_a.display();
  obj_b.display();
  
    return 0;
}
