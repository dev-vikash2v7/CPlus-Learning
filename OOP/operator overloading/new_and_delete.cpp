#include <iostream>
using namespace std;

// #define out(a ) cout << a  <<endl`

class Integer
{
public:
    int num;
    Integer(int x = 0) : num(x){
         cout << "Integer constructor object deleted\n ";
    };

    void *operator new(size_t size); // must return a void* and first arg is of type size_t
    void operator delete(void *);    // must return a void and first arg is of type void* and second has optional arg size+t

~Integer(){
    cout << "~Integer destructor object deleted\n ";
}
};

void *allocate(size_t size)
{

    void *p = malloc(size);

    if (p == NULL)
    {
        cout << "failed to allocated memory\n";
        exit(0);
    }
    else
    {
        return p;
    }
};

void freeMemory(void *m)
{
    free(m);
}

void *Integer ::operator new(size_t size)
{

    cout << "void* Integer ::operator new(size_t size) called\n";
    cout << "allocate " << size << " bytes\n\n";

    return allocate(size);
};

void Integer ::operator delete(void *m)
{
    cout << "void* Integer ::operator delete(void *) called\n\n";
    freeMemory(m);
};

//
void* operator new(size_t size)
{
    cout << "global operator new(size_t size) called\n";
    cout << "allocate " << size << " bytes\n\n";

    return allocate(size);
};

void operator delete(void *m)
{
    cout << "global operator delete(void *) called\n\n";
    freeMemory(m);
};


int main()
{
    // allocation for ptr int

    // allocation for Integer objects
    Integer *a , *b;

//allocate four integers objects
    a  = new Integer[4];
    b = new Integer ;

    delete [] a;
    delete b;

    return 0;
}

// size_t => it is an implementation dependent unsigned integral type defined in <stddef.h>
// new and delete are static member function they cannot be virtual function