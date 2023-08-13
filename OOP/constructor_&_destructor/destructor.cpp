
#include <iostream>
using namespace std;

int count = 0 ; 

class number{
    
    
    public : 
 
    number(){
    count++;
        cout << "this is number constructor with count = " << count <<endl;
    }
    ~number(){
        count--;
        cout << "------destructor--------- with count = " << count << endl ; 
    }
    
};   
int main()
{
    
number num;
{
cout << "entering in num block\n " ;

cout << "creating 2 more objects\n";

number num1 , num2 ;

cout << "existing from num block\n" ;
};

cout << "in main block\n" ; 
    return 0;
}
