#include <iostream>

using namespace std;

template <class T>//custom data type

class Vector
{
private:
    int size;

public:
    T *arr;

    Vector(int m)
    {
        size = m;
        arr = new T[m];
    };
    T dot_product(Vector &v2)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += arr[i]* v2.arr[i];
        };
        
        return d;
    }
};

int main()
{

    int n = 3 ;

    Vector<int> v1(n);
    Vector<int> v2(n);

    v1.arr[0] = 1;     v1.arr[1] = 2;     v1.arr[2] = 3;
     v2.arr[0] = 4;     v2.arr[1] = 5;      v2.arr[2] = 6;
    
  int result1 =   v1.dot_product(v2);


cout << result1 << endl ;

//for float
    Vector<float> v3(n);
Vector<float> v4(n);

 v3.arr[0] = 1.5;     v3.arr[1] = 2.2;     v3.arr[2] = 3.1;
      v4.arr[0] = 5.81;     v4.arr[1] = 5;      v4.arr[2] = 0;

  float result2 =   v3.dot_product(v4);

cout << result2 << endl ;

//for double
    Vector<double> v5(n);
Vector<double> v6(n);

 v5.arr[0] = 1.56465;     v5.arr[1] = 2.545432;     v5.arr[2] = 3.1445;
      v6.arr[0] = 554.4581;     v6.arr[1] = 5.343545;      v6.arr[2] = 0.343542;

  double result3 =   v5.dot_product(v6);

cout << result3 << endl ;
    return 0;
}
