#include <stdlib.h>
#include <iostream>

using namespace std;

int fact(int n){
    int product = n;
    for (int i=n-1;i>0;i--){
        product *=i;
    }
    return product;
}

int main(){
    cout<<fact(5)<<endl;
}