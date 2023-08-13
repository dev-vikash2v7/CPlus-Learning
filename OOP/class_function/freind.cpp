#include <iostream>
#include "friend.h"

using namespace std;


int main()
{
  BaseA aobj;
  BaseB bobj;


  int n,d;

  cout << "enter value of num and denom : " ;
  cin >> n >> d ;
  
  Fraction fobj(n,d);

fobj.print_fraction();
fobj.set_fractionToZero();

aobj.print_fraction(fobj);
bobj.print_fraction(fobj);

print_fraction(fobj);
set_fractionToZero(fobj);


    return 0;
}