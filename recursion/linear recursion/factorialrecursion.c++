#include <iostream>
#include <stdlib.h>

using namespace std;

//time complexity O(n)
//space complexity O(n)
int fact(int n){
    if (n>0){
        return n*fact(n-1);
    } else{
        return 1;
    }
}

int main(){
    cout<<fact(5)<<endl;
}
