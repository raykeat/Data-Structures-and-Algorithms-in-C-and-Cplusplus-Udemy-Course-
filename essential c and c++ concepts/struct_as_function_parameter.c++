// in C and C++, a struct containing an array can be passed by value as a function parameter
#include <iostream>

using namespace std;

struct test{
    int A[5];
    int b;
};

void random_function(test r){
    cout<<r.A[0]<<endl;
}

int main() {
   
    test t = {{2,3,1,2,3},5};
    random_function(t);
   
    cout << "Function has run";
    return 0;
}
