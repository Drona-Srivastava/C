#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* mall = (int*) malloc (10*sizeof(int)); // continuous allotment of memory 
    int* call = (int*) calloc (10 , sizeof(int)); // discontinous or random memory allotment
    int* mall = (int*) realloc ( mall , 11*sizeof(int)); // re-allocation of memory 
}