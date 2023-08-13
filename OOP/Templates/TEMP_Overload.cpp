#include <iostream>
using namespace std;

template <class T>

class Array
{
protected:
    int length;
    T *array;

public:
    Array<T>(int size = 0);
    T &operator[](int index); // overloaded index operator
    virtual ~Array();
};

template <class T>

Array<T>::Array(int size)
{
    cout << "constructor called!!\n";
    length = size;

    if (size > 0)
    {
        array = new T[length];
    }
    else
    {
        array = (T *)NULL;
    };
};

template <class T>
T &Array<T>::operator[](int i)
{
    static T dummy;

    if (i >= 0 && i < length)
    {
        return array[i];
    }
    else
    {
        cout << "dummy :" << dummy <<endl;
        cout << "ERROR : index out of range\n";
        exit(0);
        return dummy;
    }
};

template <class T>
Array<T>::~Array<T>()
{
    cout << "destructor called\n";
    if (array != NULL)
    {
        delete[] array;
    }
}

int main()
{
    int i;

    string names[] = {"vk", "dk", "ck", "la", "las" , "dfa"};

    Array<int> integers(10);     // array of 5 int
    Array<string> char_ptrs(10); // array of 5 char *

    for (i = 0; i < 6; i++)
    {
        integers[i] = i + 10;
        char_ptrs[i] = names[i];
    };

    for (i = 0; i < 6; i++)
    {
        cout << "int : " << integers[i] << endl;
        cout << "char * : " << char_ptrs[i] << endl
             << endl;
    };
// cout << "char * : " << integers[6] << endl
//              << endl; 
    return 0;
}