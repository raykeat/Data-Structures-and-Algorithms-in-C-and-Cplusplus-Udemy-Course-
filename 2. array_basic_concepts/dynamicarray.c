// increasing dynamic array size in c
#include <stdio.h>
#include <stdlib.h>

int main() {
   
    int *x = (int *)malloc(sizeof(int)*2);
    for (int i=0;i<2;i++){
        x[i] = i*2;
    }
   
    //realloc function in C reallocates the memory block pointed to by the given pointer to a new size. a new memory block is assigned to a pointer, and the old memory block is freed
    x = realloc(x,sizeof(int)*10);
   
    for (int i=2;i<10;i++){
        x[i] = i*33-6;
    }
   
    for (int i=0;i<10;i++){
        printf("%i\n",x[i]);
    }
    return 0;
}
