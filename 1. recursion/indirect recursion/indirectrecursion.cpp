#include <iostream>
#include <stdlib.h>

using namespace std;

//Indirect recursion, also known as mutual recursion, refers to a situation 
//where a group of functions call each other in a circular or mutually-dependent manner

void functionA(int n);

void functionB(int n) {
    if (n > 0) {
        cout << "B: " << n << endl;
        functionA(n - 1);
    }
}

void functionA(int n) {
    if (n > 0) {
        cout << "A: " << n << endl;
        functionB(n - 1);
    }
}

int main(){
    functionA(10);
    return 0;
}