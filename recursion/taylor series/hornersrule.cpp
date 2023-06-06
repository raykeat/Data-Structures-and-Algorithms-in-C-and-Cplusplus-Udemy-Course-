#include <iostream>
#include <stdlib.h>


// calculates the value of the expression (1 + x + x^2/2! + x^3/3! + ... + x^n/n!) 
// Horner's rule is a technique used for evaluating polynomials efficiently.
// Horner's rule involves rewriting a polynomial expression in a nested form 
// where each term is factored with the variable

using namespace std;

//iterative version
int e(int x, int n){
    int s = 1;
    for (n>0;n--;){
        s = 1 + x/n*s;
    }
    return s;
}

//recursive function

int e1(int x, int n){
    static int s=1;
    
    //base condition
    if (n==0){
        return s;
    } 

    //recursive condition
    else {
        s = 1 + x/n*s;
        return e1(x,n-1);
    }
}