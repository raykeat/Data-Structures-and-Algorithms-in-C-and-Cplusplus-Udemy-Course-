#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {

     //a is a pointer to a pointer
    int **a;
    //a points to an array of 3 pointers (the array of 3 pointers are on the heap)
    a = new int*[3];
    a[0] = new int[4];
    a[1] = new int[4];
    a[2] = new int[4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            a[i][j] = i*j;
        }
    }

    cout<<a<<endl;
    cout<<a[0]<<endl;
    cout<<*a<<endl;
    cout<<*(a[2])<<endl;
    cout<<a[2][3]<<endl;

    return 0;


}