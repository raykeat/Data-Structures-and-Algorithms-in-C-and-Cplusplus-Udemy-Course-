#include <iostream>
#include <stdlib.h>
using namespace std;

//swap function using pointers (passing by address)
void swap (int *a, int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//main function
int main() {
    // Write C++ code here
   
    int x=69,y=2983;
    swap(&x,&y);
    cout<<x<<endl<<y;
   

    return 0;
}


