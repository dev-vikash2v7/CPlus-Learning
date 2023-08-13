#include <iostream>
#include <string.h>

#define show(a, b, c) cout << a << " " << b << " " << c << endl

using namespace std;

class SubString;

class String
{
    char *szStr;
    int size;
    friend SubString;

public:
    String(const char *s)
    {
        size = strlen(s) + 1;
        szStr = new char[size];

        strcpy(szStr, s);

        show("String(const char *s)", szStr, size); // 1 (vikash , 7) , 3(o , 2)
    };

    void display()
    {
        cout << szStr << endl;
    };

    SubString operator()(int pos, int length);

    ~String()
    {
        show(" ~String() : ", szStr, size); // 10(vikosh , 7)
        delete[] szStr;
    }
};

class SubString
{
    char *pStartChar;
    int size;

public:
    SubString(char *p, int s)
    {
        show("in SubString const : ", p, s); // 5(ash , 1 )
        pStartChar = p;
        size = s;
    }

    SubString &operator=(const String &obj)
    {
        show("in SubString &operator=  : ", obj.szStr, obj.size); // 7(o , 2)

        strncpy(pStartChar, obj.szStr, size); // ("ash" ,"o" ,  1)
        return *this;
    }

    ~SubString()
    {
        show(" ~SubString() : ", pStartChar, size); // 8(osh , 1)
    };
};

SubString String ::operator()(int pos, int length)
{
    show("SubString String :: operator()  : ", pos, length); // 4( 3 , 1)

    SubString tmp(szStr + pos, length);

    show("after temp : ", szStr + pos, length); // 6(ash, 1)
    return tmp;
}

int main()
{
    String x = "vikash";
    x.display(); // 2

    x(3, 1) = "o"; // vikash becomes vikosh

    x.display(); // 9(vikosh)

    return 0;
}