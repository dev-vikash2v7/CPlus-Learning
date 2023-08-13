#include <iostream>
using namespace std;

class IntArray
{
    int len;
    int *arr;

public:
    int &operator[](int index);

    IntArray(int a)
    {
        arr = new int[len = a];
    };

    void display()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << endl;
        }
    };

    ~IntArray()
    {
        if (arr)
        {
            delete[] arr;
        }
    };
};

int& IntArray ::operator[](int index)
{

    if ((index >= 0) && (index < len))
    {
        return arr[index];
    }
    else
    {
        cout << "error : out of range\n";
        exit(1);
    }
};

int main()
{
    IntArray number(10);

    for (int i = 0 ; i < 10; i++)
    {
        number[i] = i * 10 + 10;
    }
    number.display();

    return 0;
}