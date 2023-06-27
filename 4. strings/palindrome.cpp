// checking if number is a palindrome
#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;

int main() {
    string s = "12321";
    int len = s.length();
    for (int i=0;i<len/2;i++){
        if (s[i]!=s[len-1-i]){
            cout<<"not palindrome"<<endl;
            return 1;
        }
    }
    
    cout<<"palindrome"<<endl;
    return 0;
}