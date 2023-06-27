#include <iostream>
#include <stdlib.h>

using namespace std;

//using tail recursion (tail recursion is where the recursive call is the last operation performed within a recursive function)
//Time complexity - O(n)
//Space complexity - O(n)
void fun(int n){
    if (n>0){
        cout<<n<<endl;
        fun(n-1);
    }
 
}

//for/while loop is more space efficient than tail recursion

//using while loop
//Time complexity - O(n)
//Space complexity - O(1)
void fun(int n){
    while (n>0){
        cout<<n<<endl;
        n--;
    }
}

//main function
int main(){
    int a = 3;
    fun(a);
}