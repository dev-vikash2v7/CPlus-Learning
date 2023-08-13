#include <stdio.h>
#include <stdlib.h>

int main()
{
int i = 6 , j = 9;

// int * const ptr1  ;   // constant pointer
// int const *  ptr2  ;  // //variable ptr to constant integer data
// const int * const *ptr3 ; //constant pointer to constant variable 

int *ptri = &i , *ptrj  = &j;
printf("value of i and address =  %d %d\nvalue of j and address = %d %d\n\n",i ,   ptri , j , ptrj) ;

*ptri = 10 ;
printf("value of i and address =  %d %d\nvalue of j and address = %d %d\n\n",i ,   ptri , ptrj , j) ;


*ptrj  = *ptri ;
printf("value of i and address =  %d %d\nvalue of j and address = %d %d\n\n",i ,   ptri , ptrj , j) ;

ptrj  = ptri ; //address of j equals to i;
printf("value of i and address =  %d %d\nvalue of j and address = %d %d\n\n",i ,   ptri , ptrj , j) ;
*ptrj = 20;
printf("value of i and address =  %d %d\nvalue of j and address = %d %d\n\n",i ,   ptri , ptrj , j) ;


int **ptr = &ptri;

printf("\n**ptr = %d and address = %d" , **ptr , ptr);

    return 0;
}