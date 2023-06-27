#include <iostream>
#include <stdlib.h>

using namespace std;
//tree recursion
//Tree recursion is a type of recursive problem-solving technique 
//where a recursive function calls itself multiple times. 
//Each recursive call leads to multiple subsequent recursive calls, forming a tree-like recursive structure. 

//Time Complexity of O(2^n)
//Space complexity of O(n) as depth of call stack is n
void fun(int n){
    cout<<n<<endl;
    fun(n-1);
    fun(n-1);
}