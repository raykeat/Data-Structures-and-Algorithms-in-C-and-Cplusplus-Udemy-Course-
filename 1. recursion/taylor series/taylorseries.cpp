#include <iostream>
#include <stdlib.h>

//recursive function e that 
//calculates the value of the expression (1 + x + x^2/2! + x^3/3! + ... + x^n/n!) recursively.
using namespace std;

double e(int x, int n){
    static double p=1,f=1;
    double r;

    if (n==0){
        return 1;
    } else{
        r = e(x,n-1);
        p = p*x;
        f = f*n;
        return r+p/f;
    }
}

int main(){
    cout<<e(7,8)<<endl;
    //for c
    // printf("%lf\n",e(7,8));
}