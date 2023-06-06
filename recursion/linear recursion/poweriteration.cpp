#include <stdlib.h>
#include <iostream>

using namespace std;

int power(int m, int n){
    int s=1;
    for (int i=0;i<n;i++){
        s = s*m;
    }
    return s;
}

int main(){
    cout<<power(3,4)<<endl;
}