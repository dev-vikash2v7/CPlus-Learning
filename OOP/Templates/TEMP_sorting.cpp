#include <iostream>
#include <string.h>

#define CallFunc(function , message) \
    cout << "the integers : ("#message")..." ;\
    arr_int.function(); \
    cout << "the floates : ("#message")..." ;\
    arr_floates.function(); \
    cout << "the characters : ("#message")..." ;\
    arr_char.function(); \
    cout <<endl;

using namespace std;

enum Boolean{False , True}; // 0 ,1

//function overloadin
template <class T >
Boolean _less(T a ,T b){
    return (a < b) ? True : False ;
}
// Boolean _less(const char* s1 ,const char* s2){
//     cout << "Boolean _less(const char s1 ,const char s2)" << endl;
//     return (strcmp(s1 , s2) < 0 ) ? True : False ;
// }




template <class T , int size = 0>
class Array
{
    int len;
    T array[size] ;//  T *array;

public:
    Array()
    {
        cout << "constructor called!!\n";
        len = size;
        // if (size)
        // {
        //     array = new T[len];
        // }
        // else
        // {
        //     array = (T *)NULL;
        // }
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
        // delete[] array;
    };

    void create(T array[])
    {
        for (int i = 0; i < len; i++)
        {
            this->array[i] = array[i];
        }
    };
    void display()
    {
        for (int i = 0; i < len; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    void bubbleSort(bool reverse = false);
    void _swap(T &a, T &b);
};

template <class T ,int size>
void Array<T , size>::_swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <class T,int size>
void Array<T , size>::bubbleSort(bool reverse)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (reverse)
            {
                if (_less(array[i] , array[j]))
                {
                    _swap(array[i], array[j]);
                }
            }
            else
            {
                if (_less(array[i] , array[j]))
                {
                    _swap(array[i], array[j]);
                }
            }
        }
}
}

// user function

template <class T>
void _swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <class T , int size>
void bubbleSort(Array<T> arr)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                _swap(arr[i], arr[j]);
            }
        }
    }
}
int main()
{
  const  int n = 5;
    int integers[] = {3, 4, 2, 55, 3};
    char characters[] = {'x', 'a', '$', '1', 'A'};
    float floates[] = {4.6, 4.3, 1.6, 1, 43.2, 1.2};
    // string names[] = {"xyz", "zyx", "AAB", "aBc", "AAAAA"};
    // string names[] = {"zero", "one", "two", "three", "four"};

    Array<int , n> arr_int;
    Array<char , n> arr_char;
    Array<float , n> arr_floates;
    // Array<string , n> arr_names

    arr_int.create(integers);
    arr_char.create(characters);
    arr_floates.create(floates);
    // arr_names.create(names);

    CallFunc(display , before sorting);

    arr_int.bubbleSort();
    arr_char.bubbleSort();
    arr_floates.bubbleSort();
cout << endl<<endl;
// arr_names.bubbleSort();
    // bubbleSort(arr_int, n);
    // bubbleSort(arr_char, n);
    // bubbleSort(arr_floates, n);

    CallFunc(display , after sorting);

    
    // arr_names.display();

    return 0;
}