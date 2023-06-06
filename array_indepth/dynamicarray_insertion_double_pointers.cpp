#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void insert(int **p, int index, int number, int size){
    int *s = new int[size+1];
    copy(*p,*p+size,s);
    delete[] *p;
   
    for(int i=size;i>index;i--){
        s[i]=s[i-1];
    }
    s[index]=number;
    *p=s;
}

void append(int **p, int number, int size){

    int *s = new int[size+1];;
    copy(*p,*p+size,s);
    delete[] *p;
    s[size]=number;
    *p=s;
}

int main() {
    // declaring a dynamic array in c++
    int size = 5;
    int *x = new int[size];
   
    //appending number to array
    //passing by address
    append(&x,7,size);
    size++;
   
    //inserting number at specific index of array
    //passing by address
    insert(&x, 3, 6, size);
    size++;
   
    //printing out numbers in new array
    for(int i=0;i<size;i++){
        cout<<x[i]<<endl;
    }
    delete []x;
    x = NULL;
} 
