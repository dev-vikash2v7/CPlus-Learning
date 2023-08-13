#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 12, 4, 54, 77 , 7};

    sort(arr, arr + 5 , greater<int>()); //sort first 5 elements

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i]<<endl;
    };
}
/*
function object (functor) : function wrapped in a class so that it will available like an object
 */
