// increasing dynamic array size in c++
//In C++, you can initialize an array with an initializer list at the time of declaration for static arrays, but not for dynamically allocated arrays.
#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
    //allocating memory for array on heap and assigning it to pointer x
    int * x = new int[7];
    for (int i=0;i<7;i++){
        x[i] = i*3;
    }
   
    int *p = new int[10];
    //copying values from first array to second array
    copy(x,x+7,p);
   
    for (int i=7;i<10;i++){
        p[i]=i*26;
    }
   
    //freeing memory allocated to first array on the heap
    delete []x;
    //assigning memory address of p to x
    x = p;
   
    for (int i=0;i<10;i++){
        cout<<x[i]<<endl;
    }
    //freeing memory allocated to second array on heap
    delete []x;
    x = NULL;
    return 0;
}