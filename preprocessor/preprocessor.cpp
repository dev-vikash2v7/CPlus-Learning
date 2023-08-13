#include <iostream>
using namespace std;

//#define
#define max(a,b) a>b?a:b
#define size 12
#define product(a,b) ((a)*(b))

//# -> converts a parameter of a func-like macro into a chr string literal
#define str(x) (#x)
#define concat(x,y) (#x #y)

//null -> perform no action . it consits of single # on a line of its own
// #define # 

//## -> concatenates two tokens in a macro invocation (text or arg) that a macro defination contains
#define concat2(x,y) (x##y)
#define foot F
#define football sport
#define  sport "Sport"



int main()
{
    int n = max(4+3,7+7) ;
    int a = size-1; //a  = 12; - 1 => 12;
    int p = product(2+3,4+5); //if bracket is not done 2+3*4+5 = 19
    // cout << n << endl<<a <<endl<< p<<endl;
 
 
    // cout<<str(hello world) << endl << str(1)<<endl<< concat(vikash,129)<< endl;

    cout << concat2(foot,ball); //if ball will give error: 'ballball' was not declared in this scope

    return 0;
}