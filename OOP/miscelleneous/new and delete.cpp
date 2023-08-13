
#include <iostream>

using namespace std;


int main()
{
int a= 3 ; 
// int *ptr = &a;

// int *ptr = new int(4);
float *ptr = new float(45443.3343);
*ptr = 34.43;
// delete ptr;//this will delete and pointer initialse to 0
cout << "a = " << *(ptr) <<endl ;

int *arr = new int[3];

*arr = 44;
*(arr + 1 ) = 98;
arr[2] = 12 ;

cout << arr[0] <<endl <<  arr[1] <<endl << arr[2] <<endl ;
delete arr;

}
