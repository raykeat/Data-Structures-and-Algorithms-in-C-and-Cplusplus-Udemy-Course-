#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    //creating an array of pointers
    int * A[3];
   
    //dynamically allocating memory for array of size 4 and assigning it to each pointer
    for (int i=0;i<3;i++){
        A[i] = new int[4];
    }

    //4th member of array pointed to by 3rd pointer
    A[2][3] = 4;
    cout<<A[2][3]<<endl;
    return 0;

}