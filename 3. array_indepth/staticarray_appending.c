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

void Insert(struct Array *arr, int x, int index){
    if (arr->length < arr->size){
       for (int i=(arr->length)-1;i>=index;i--){
            arr->A[i+1]=arr->A[i];
       }
       arr->A[index]=x;
       arr->length++;
    }
    else {
        printf("Array is full. Cannot append element.\n");
        // You can choose to display an error message or take any other action here
    }
}

int main(){
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    Append(&arr, 10);
    Insert(&arr,28728,3);
    for (int i=0;i<arr.length;i++){
        printf("%i\n",arr.A[i]);
    }
    return 0;
}