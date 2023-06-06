#include <stdlib.h>
#include <iostream>

using namespace std;

//space complexity O(n)
//time complexity O(n)
int power(int m, int n){
    if (n==0){
        return 1;
    } else{
        return power(m,n-1)*m;
    }
}

//space complexity O(log2 n)
//time complexity O(log2 n)
int power2(int m, int n){
    if (n==0){
        return 1;
    } else if (n%2==0){
        return power2(m*m,n/2);
    } else{
        return power2(m*m,(n-1)/2)*m;
    }
}

int main(){
    cout<<power2(5,6)<<endl;
}