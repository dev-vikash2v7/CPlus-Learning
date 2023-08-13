#include <iostream>
#include <fstream>

using namespace std;

void write(){
// string text = "vikash kumar verma\nthis is next second line";
ofstream out("sample.txt"); //opening file using constructor and writing it
    // out << text; 


string name ;
cout << "enter name : " ;
cin >> name ; 

    ofstream hout("sample.txt"); //connectin file with hout stream
    hout << "my name is : " + name ; 

    hout.close();
};

void read(){
//  string name;
//     ifstream in("sample.txt"); // opening file using constructor and reading it
//     // in >> name; //to get single word
//     getline(in, name); // to get completer line
//     getline(in, name); // to get completer line
//     cout << name << endl;


 string content;
    ifstream hin("sample.txt"); // opening file using constructor and reading it
    // in >> name; //to get single word
    getline(hin, content); // to get completer line
    cout <<"content of file is : " << content << endl;

    hin.close();

};
int main()
{
    write();
    read();


    

   
}
/*
* useful class for working with files are

1.fstreambase ->
2. ifstream -> derived from fstreambase
2. ofstream -> derived from fstreambase

//2 ways to open a file :

    1. using constructor
    2. using member function open() for class
 */
