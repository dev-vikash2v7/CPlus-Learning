#include <iostream>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 20
using namespace std;

int main()
{
    char *szStr = new char[50]; //dynapic string
    char chArr[MAX_SIZE];       //static string
    int n_char;

    if (szStr == NULL)
    {
        cerr << "soryy" << endl;
        exit(1);
    };

    cout << "enter a string : ";
      cin >> szStr;

    // szStr = new char [50];
    n_char = strlen(chArr) + 1 ; // +1 for \0 chr at end


    // strcpy(szStr, chArr);
    strcpy(chArr , szStr );

    cout << "static string : " << chArr << endl;
    cout << "dynamic string : " << szStr << endl;

    delete[] szStr;

    return 0;
}