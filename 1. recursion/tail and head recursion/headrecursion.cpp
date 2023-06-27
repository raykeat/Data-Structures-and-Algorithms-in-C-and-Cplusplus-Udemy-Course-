#include <iostream>
#include <stdlib.h>

using namespace std;

//using head recursion (head recursion is where the recursive call is performed before any other operation within a recursive function)
//all other operations will be performed during returning time (backtracking)
//Time complexity - O(n)
//Space complexity - O(n)
void fun(int n){
    if (n>0){
        fun(n-1);
        cout<<n<<endl;
    }

}

//using while loop
//Time complexity - O(n)
//Space complexity - O(1)
void fun(int n){
    int i=0;
    while (i<n){
        cout<<i<<endl;
        i++;
    }
}

//main function
int main(){
    int a = 3;
    fun(a);
}
