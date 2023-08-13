#include <iostream>

using namespace std;

//forward declaration : so Complex will declared and does not produce any error
class Complex;

class Calculator{
    public :
        int add(int a , int b){
            return a+b;
        };
        //first declarion and then defination 
        int sumRealComplex(Complex, Complex);
        int sumImaginaryComplex(Complex , Complex );
        
};



class Complex{
    private:
    int a,i;
    
    //friend function
    // friend int sumRealComplex(Complex , Complex);
    
    //individually declaring function as friends in classes
    //  friend int Calculator ::  sumRealComplex(Complex , Complex) ;
    //     friend int Calculator :: sumImaginaryComplex(Complex , Complex);
        
        
        //alter : declaring the entire calculator class as friend
        friend class Calculator;
        
    public : 
        
        void setNumber(int a , int i){
            this->a = a ;
            this->i = i;
             cout << "complex number is : " << this->a << " + " <<this->i << " i" <<endl;
        };
        
       
};


// int sumRealComplex(Complex o1  , Complex o2){
//     return (o1.a + o2.a); 
//     //if it is not friend of Complex then error: ‘int Complex::i’ is private within this context
// }

int Calculator :: sumRealComplex(Complex o1 , Complex o2){
     return (o1.a + o2.a);
};

int Calculator :: sumImaginaryComplex(Complex o1 , Complex o2){
     return (o1.i + o2.i);
};


int main()
{
    int i1 = 5 , j1 = 6;
    int i2 = 15 , j2 = 16 ; 
    
    Complex obj1 ;
    obj1.setNumber(i1 , j1);
    
      Complex obj2 ;
    obj2.setNumber(i2 , j2);
    
    Calculator operation ;
    
    cout<<"\nsum of real Complex : " << operation.sumRealComplex(obj1 , obj2) <<endl ;
    
  cout<<"sum of imaginary Complex : " << operation.sumImaginaryComplex(obj1 , obj2) <<endl ;
  
    return 0;
}
