#include <iostream>
using namespace std;

class Fraction{

    private:
        int *num , *denom;

    public :
    //constructor
    Fraction(int a , int b){
        *num = a ;
        *denom = b ;
        cout << "a = " << *num << " b= " << *denom << endl ;
    }

    //copy constructor
    Fraction(const Fraction &);

    //destructor
    ~Fraction(){
        delete num;
        delete denom;
    };
};

Fraction :: Fraction(const Fraction &another_fraction){
    num = new int;
    denom = new int;

    *num = *(another_fraction.num);
    *denom = *(another_fraction.denom);

    cout << "copy const sets num = " << *num << endl ;
};



int main()
{
    //allocates storage for a single unintialised
    // char *pc1 = new char  ;
 
    // //initialised with a
    // char *pc2 = new char('a')  ;


    //allocates storage for 10 uninitialised integers
    // int *pi1 = new int[10]  ;

    //allocates storage for 10 initialised 4  integers  
    // int *pi2 = new int[10] (4)  ;

    int *num ;
    pi  = new int[10];
    if(pi == NULL ){
        printf("dynamic memory allocation failed!!!!!\n");
    }

    //class
    Fraction *pf = new Fraction(4,6);

    printf("%c" ,*pc2 );

    delete pi1;
    // delete pi2;
    delete pc1;
    delete pc2;

    return 0;
}