#include <iostream>
#include <fstream>

using namespace std;

void write(){

ofstream out;
out.open("sample.txt"); //opening file using member function and writing it

 out << "my name is vikash\n"; 
 out << "i am from mp\n"; 

out.close();
};

void read(){

 string content ,str1 ,str2;

    ifstream in;
    in.open("sample.txt"); // opening file using member function and reading it
    // in >> str1 >> str2 ; //to get single word

 cout <<"content of file is : " << endl ;
    while(in.eof() == 0){

    getline(in, content); // to get completer line
    //  in >> str1 ;
  cout <<  content << "\n";

    };
    cout << endl;

    in.close();

};
int main()
{
    // write();
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
