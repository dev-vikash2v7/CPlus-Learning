#include <iostream>

using namespace std;

template <class T1 = int  ,class T2 = char , class T3 = float>//custom data type

class TEMP
{
private:
    T1 d1;
    T2 d2;
    T3 d3;

public:  
    T1 *arr ;

    TEMP(T1 m , T2 n , T3 p)
    {
        d1 = m;
        d2 = n;
        d3 = p;
    };
    void display()
    {
     cout << d1 <<endl ;
     cout << d2 <<endl ;
     cout << d3 <<endl <<endl;
    }
};

int main()
{

    int n = 3 ;

    TEMP<> t1(56  , 'a' , 6.9); //default parameter will used
    TEMP<float , char , int> t2(3.5 , 'b' , 2);
TEMP<char , char , char> t3('q' , 'b' , 'd');
t1.display();


t2.display();
t3.display();
    return 0;
}
