#include <iostream>
using namespace std;
 
int main()
{
    // Take any string
    string s = "dog:cat";
 
    // Find position of ':' using find()
    //return -1 if not found
    int pos = s.find(":"); //3

//     cout << pos<<endl;
 
    // Copy substring after pos
   // string sub = s.substr(++pos); //4
    string sub = s.substr(0 , pos); //4
 
    // prints the result
    cout << "String is: " << sub <<endl;
 
    return 0;
}