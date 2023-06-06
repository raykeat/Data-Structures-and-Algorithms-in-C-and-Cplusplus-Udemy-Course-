
#include <iostream>
using namespace std;

//arrays will decay into a pointer to the first element of the array when passed as a function 
//parameter or assigned to a pointer variable (array-to-pointer decay)
int * fun(int size){
    //dynamically allocating memory for an array on the heap
    //and passing it to a pointer
    int *p = new int [size];
    for (int i=0;i<size;i++){
       
        //in C and C++, indexing into pointers is allowed and lets us modify and access individual elements of an array
       
        //p[i] is equivalent to *(p + i * sizeof(int))
        p[i]=i*3;
    }
    return p;
}

int main() {
    int * ptr;
    int size = 7;
   
    ptr = fun(size);
    cout<<ptr[1]<<endl;

    return 0;
}