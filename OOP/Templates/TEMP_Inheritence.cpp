#include "TEMP_Array.hpp"

enum Boolean{False , True };

#define CallFunc(function , message) \
    cout << "the integers : ("#message")=>" ;\
   integers.function(); \
    cout << "the floates : ("#message") => " ;\
    floates.function(); \
    cout << "the stringers : ("#message") => " ;\
    stringers.function(); \
    cout <<endl;

template <class T , int size>

class Stack : private Array<T , size>
{
protected:
int stack_ptr = -1 ; //stack pointer index sp , initialise to -1
  int maxSize ;

public:
    Stack() : Array<T , size>(){
        cout << "constructor called!!\n";
        maxSize = size ;
    };

Boolean push(const T);
Boolean pop(T&);
void display() ;

    ~Stack(){
cout << "destructor called!!\n";
    };
};

template <class T , int size>
Boolean Stack<T , size> :: push(const T data)
{
    if( stack_ptr == size) //stack full
    {
        return False;
    }
    this->array[++stack_ptr] = data ;
};

template <class T , int size>
Boolean Stack<T , size> :: pop(T& data)
{
    if( stack_ptr == -1) //stack full
    {
        return False;
    }
   data = this->array[stack_ptr--] ;
   return True ;
};

template <class T, int size>
void Stack<T, size>::display()
{
    for (int i = 0; i < size; i++)
    {
        cout << this->array[i] << " " ;
    }
    cout << endl;
}

int main()
{
    int i;

    string names[] = {"vk", "dk", "ck", "la", "las" };

    Stack<int , 5> integers;     // array of 5 int
    Stack<float , 5> floates;     // array of 5 int
    Stack<string   , 5> stringers; // array of 5 char *

for(int i =0 ; i < 5 ; i++  ){
    integers.push(i+10) ;
    floates.push(i*1.1) ;
    stringers.push(names[i]);
}
CallFunc(display , "pushing in array");

int a ;
float b;
string c ;
 integers.pop(a) ;
    floates.pop(b) ;
    stringers.pop(c);
CallFunc(display , "poping last element in array");

    
    return 0;
}