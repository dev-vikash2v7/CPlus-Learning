#include <iostream>
#include <assert.h>
using namespace std;

int main()
{
    int n = 9;

if(n==5){
    cout << "okkk\n";
}
else{
    cout<< "n is not equal to 5 , try again;\n";
    _assert(0,__FILE__,__LINE__);
}
    return 0;
}