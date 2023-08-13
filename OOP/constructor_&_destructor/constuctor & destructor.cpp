#include <iostream>
#include <new>

using namespace std;

// int myNewHandler(size_t s)    //sizeu_t -> nsigned int
// {
//     cerr << "sorry operation failed"<<endl ;
//     exit(1);
//     return 0;

// };

class Fraction
{
    
public:
    int num, denom ;
    
    Fraction(int n , int d){
        num =n ;
        denom =d ;
        cout << " default constructor called" ;
        };        //default constructor

    // Fraction(int = 0 ,  int = 1); //constructor

    operator+(Fraction obj1 , Fraction obj2){
        return obj1.num + obj2.num; 
    }

    void setValue(int, int);
    void getValue(int &, int &);

    void add(int a ,int b);

    ~Fraction(){cout << "destructor called\n";}; //destructor
};

void Fraction::add(int a , int b){
cout << a+b ;

}

//user defined overload constructor
// Fraction::Fraction(int a, int b)
// {
//     num = a , denom = b ; 
    
//     cout << "num-denom in user defined overload constructor Fraction(int , int)"<<endl ;
//     cout << "num = " << num << endl << "denom = " << denom << endl<<endl;
// }


void Fraction :: setValue(int a , int b){
        num = a ;
        denom = b ; 
            cout << "num-denom in user defined setValue func"<<endl ;
    cout << "num = " << num << endl << "denom = " << denom << endl<<endl;

}

void Fraction :: getValue(int &a , int &b){
       a = num ;
       b = denom ;

            cout << "num-denom in user defined getValue func"<<endl ;
    cout << "num = " << a << endl << "denom = " <<b << endl<<endl;

}

//destrucor

// Fraction::~Fraction(){
//     printf("num and denom deleted with destructor");
//     delete num;
//     delete denom;
// };


int main()
{
    int num  = 5 , denom =4 ;
cout << num+denom <<endl; 


    Fraction obj1(6,8) ;
    Fraction obj2(5 ,7) ;

   cout <<  obj1 + obj2 << endl;
// //     // _set_new_handler(myNewHandler);
// cout << a.num << endl<<a.denom;
// Fraction b ;
// b = a ;

//     // f.setValue(76,34);

//     // f.getValue(num , denom);

//     // cout << "num value retrived : " << num << endl << "denom value retrived : " << denom ;
// obj.add(4,8);

    return 0;
}

/*
//constructor
            * class_name()

            *are special member functions of classes of classes

            * of an object invloves memory allocation and initialization for the object.

            * 




// destructor > 
            * ~class_name()

            * a destructor is special memver function with the same name as its class name prefixed with ~

            * it cannot take no args and has no return type even void.

            * one cannot take its address  and also not declare as const , volatile.

            * but can declaree as virtual or pue virtual

            * uses
                * used to deallocate memory and do other cleanup for an object and its members when the object is           destroyed. it is called for object when that object goes out of scope or explicity deleted through delete call
                
                *it is responsible for cleaning up when a class object is no longer needed, deallocating any memory that the object used.

                * destructor will only delete the member variables of the class. 

                *automatically called when an object goes out of scope or when  a pointer to object is deallocated using specific call to delete operator. 

        */