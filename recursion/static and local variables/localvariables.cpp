//local variables in recursion

#include <iostream>
#include <stdlib.h>

using namespace std;

int fun(int n){
    //Local variables are variables that are declared within the scope of a function or a block. 
    //Each time a function is called, a new instance of local variables is created, 
    //and they are destroyed when the function execution completes or exits that specific scope.
    int x = 0;

    if (n>0){
        x++;
        return fun(n-1)+x;
    }

    if (n==0){
        return 0;
    }
}

int main(){
    int a = 3;
    cout<<fun(a)<<endl;
    return 0;
}