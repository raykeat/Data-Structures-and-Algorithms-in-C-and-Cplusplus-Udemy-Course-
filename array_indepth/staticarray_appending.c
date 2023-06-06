#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

void Append(struct Array *arr, int x){
    if (arr->length < arr->size){
        arr->A[arr->length++] = x;
    }
    else {
        printf("Array is full. Cannot append element.\n");
        // You can choose to display an error message or take any other action here
    }
}

int main(){
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    Append(&arr, 10);
    return 0;
}