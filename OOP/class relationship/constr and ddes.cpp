#include <iostream>
using namespace std;
class Fraction
{
private:

public:
    Fraction(){
        cout << "constructor called\n";
    };        //default constructor
    ~Fraction(); //destructor
};
//destrucor
Fraction::~Fraction(){
    printf("destructor called");
};
int main()
{
    Fraction f;
    return 0;
}

/*
//constructor
            * class_name()

            *are special member functions of classes of classes

            * of an object invloves memory allocation and initialization for the object.

            * 




// destructor > 
            * ~class_name()

            * a destructor is special memver function with the same name as its class name prefixed with ~

            * it cannot take no args and has no return type even void.

            * one cannot take its address  and also not declare as const , volatile.

            * but can declaree as virtual or pue virtual

            * uses
                * used to deallocate memory and do other cleanup for an object and its members when the object is           destroyed. it is called for object when that object goes out of scope or explicity deleted through delete call
                
                *it is responsible for cleaning up when a class object is no longer needed, deallocating any memory that the object used.

                * destructor will only delete the member variables of the class. 

                *automatically called when an object goes out of scope or when  a pointer to object is deallocated using specific call to delete operator. 

        */