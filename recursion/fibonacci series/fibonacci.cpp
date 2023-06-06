#include <iostream>
#include <stdlib.h>

using namespace std;
//fibonacci series specifying first 2 values of the series
//time complexity O(n)
//space complexity O(n)
int fib(int first, int second, int n){
    static int next = 0;
    if (n>2){
        next = first + second;
        return fib(second,next,n-1);
    }

    if (n==2){
        return next;
    }
}

//fibonacci series using 0 and 1 as first 2 values of the series
//time complexity O(2^n)
//space complexity O(n)
int fib2(int n){
    if (n==0 || n==1){
        return n;
    } else{
        return fib2(n-1)+fib2(n-2);
    }
    
}

//fibonacci series using 0 and 1 as first 2 values of series
// uses memoization,  technique used in dynamic programming 
//to optimize the execution time of recursive functions 
//by storing the results of expensive function calls and reusing them when the same inputs occur again.
//space and time complexity of O(n)
int f[10];
int fib3(int n){
    //checking if result has been memoized, ie recursive function with same input has been called before
    if (f[n]){
        return f[n];
    }

    if (n==0 || n==1){
        f[n]=n;
        return n;
    } else{
        int result = fib2(n-1)+fib2(n-2);
        f[n]=result;
        return result;
    }

}

int main(){
    cout<<"Fib 3: "<<fib3(5)<<endl;
    cout<<"Fib 2: "<<fib2(5)<<endl;
}

