#include <iostream>
using namespace std;

template <class T, int size>

class Array
{
    int len;
public:
    T *array;
    Array()
    {
        cout << "constructor called!!\n";
        len = size;

        if (size)
        {
            array = new T[len];
        }
        else
        {
            array = (T *)NULL;
        }
    };

    T &operator[](int index)
    {
        if (0 <= index < len)
        {
            return array[index];
        }
        else
        {
            cout << "index out of range\n";
            exit(0);
        }
    };

    ~Array()
    {
        cout << "destructor!!\n";
        delete[] array;
    };

    void create(T array[]);
    void display();
    void bubbleSort(bool reverse = false);

    void _swap(T &a, T &b);
};

template <class T, int size>
void Array<T, size>::create(T array[])
{
    for (int i = 0; i < len; i++)
    {
        this->array[i] = array[i];
    }
};
template <class T, int size>
void Array<T, size>::display()
{
    for (int i = 0; i < size; i++)
    {
        cout << this->array[i] << " " ;
    }
    cout << endl;
}

template <class T, int size>
void Array<T, size>::_swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <class T, int size>
void Array<T, size>::bubbleSort(bool reverse)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (reverse)
            {
                if (array[i] < array[j])
                {
                    _swap(array[i], array[j]);
                }
            }
            else
            {
                if (array[i] > array[j])
                {
                    _swap(array[i], array[j]);
                }
            }
        }
    }
}
