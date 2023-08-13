#include <iostream>

using namespace std;

// template <class T1, class T2> // custom data type

// float avg(T1 a, T2 b)
// {
//     float res = (a + b) / 2.0;
//     return res;
// };

// swapping variables
template <class T>

void _swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    // float res = avg<int, float>(8, 10.23);
    // cout << res << endl;

    int i = 1, j = 12;
    char a = 'x', b = 'y';
    float f1 = 4.5, f2 = 53.33;
    string s1 = "vikash", s2 = "verma";

    cout << "before swapping : \n";
    cout << "int : " << i << "  " << j << endl;
    cout << "char : " << a << "  " << b << endl;
    cout << "float : " << f1 << "  " << f2  << endl;
    cout << "string : " << s1 << "  " << s2  << endl <<endl;

    _swap(i, j);
    _swap(a, b);
    _swap(f1, f2);
    _swap(s1, s2);

    cout << "after swapping : \n";
    cout << "int : " << i << "  " << j << endl;
    cout << "char : " << a << " " << b << endl;
    cout << "float : " << f1 << "  " << f2 << endl;
    cout << "string : " << s1 << "  " << s2  << endl <<endl;
    return 0;
}
