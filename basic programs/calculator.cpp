#include <iostream>

using namespace std;


float sum(float a , float b){
    return a+b;
};
float difference(float a, float b){
    return b-a;
}
float divide(float a, float b){
    return b/a;
}
float multiply(float a,float b){
    return a*b;
}

int main()
{

    float a,b,sum_, difference_,divide_,multiply_;

    cout<<"Enter two values to be calculated ";
    cin>>a;
    cin>>b;

    sum_ = sum(a , b);
    difference_=difference(a, b);
    divide_=divide(a ,b);
    multiply_=multiply(a,b);

    


    cout<<"the sum of "<< a<< " and " <<b <<" is "<<sum_;
    // difference=b-a;
    // divide=b/a;
    // multiply=a*b;


     cout<<"the difference of"<< a <<"and"<<b <<"is"<< difference_<<endl;
     cout<<"the divide of"<<a<<"and"<<b<<"is"<<divide_<<endl;
     cout<<"the multiply of"<<a<<"and"<<b<<"is"<<multiply_<<endl;


return 0;
}