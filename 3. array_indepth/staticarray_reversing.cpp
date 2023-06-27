#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

//reversing array by swapping values in array
void reverse1(Array *arr){
    for (int i=0;i<floor(arr->length/2);i++){
        swap(&arr->A[i],&arr->A[arr->length-i-1]);
    }
}


//reversing array by creating new array with reversed values
void reverse2(Array *arr){
    Array arr2 = {{},10,5};
    for (int i=0;i<arr->length;i++){
        arr2.A[i] = arr->A[arr->length-i-1];
    }

    *arr = arr2;
}

int main(){
    Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    reverse1(&arr);
    for (int j=0;j<arr.length;j++){
        cout<<arr.A[j]<<endl;
    } 

    reverse2(&arr);
    for (int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
    return 0;
}