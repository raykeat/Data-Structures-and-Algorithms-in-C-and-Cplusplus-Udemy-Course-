#include <iostream>
#include <stdlib.h>

using namespace std;

//Nested recursion is a type of recursion where a recursive function 
//calls itself with the result of another recursive call as its parameter.

int fun(int n){
    if (n>100){
        return n-10;
    } else{
        return fun(fun(n+11));
    }
}

int main(){
    int a = fun(95);
    cout<<a<<endl;
}