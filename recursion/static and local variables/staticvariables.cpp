//static variables in recursion

#include <iostream>
#include <stdlib.h>

using namespace std;

int fun(int n){
    //static variables retain their values across multiple function calls
    //static variable x is not reset to 0 from the 2nd "fun" function call onwards
    static int x = 0;

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
    cout<<fun(a)<<endl;
    return 0;
}