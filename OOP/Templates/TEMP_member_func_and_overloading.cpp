#include <iostream>

using namespace std;

template <class T1   ,class T2 >//custom data type

class Fraction{
    private:
        T1 data1 ;
        T2 data2;
    public :
        Fraction(T1 a , T2 b){
            data1 = a ;
            data2 = b ;
        };
        void display();
};

template <class T1,class T2>

void Fraction<T1 , T2> :: display(){
    cout << data1 << "/" << data2 <<endl;
};

template <class T1>

void show(T1 a){
    cout << "\nthis is show() with Tempepate : " << a <<endl;
};

void show(int a){
    cout << "this is only show() : " << a <<endl; //highest priority will
};


int main()
{
    Fraction<float  , float>f1(2.1,4.2);
    Fraction<float  , int>f2(2.1221,79);
    Fraction<char , char>f3('a' , 'z');

//     f1.display();
// f2.display();
// f3.display();

show(3.98);//this is show() with template
show(5);//this will call only show() because -  exact match takes the highest priority

    return 0;
}
