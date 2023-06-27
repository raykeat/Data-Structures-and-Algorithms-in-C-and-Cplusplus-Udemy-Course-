// finding duplicates in a string using hashing
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <ctype.h>

using namespace std;
int main() {
    string s = "hello I love your mom";
    int len = s.length();
    
    //creating another array for hashing
    int arr[26]={};
    
    for (int i=0;i<len;i++){
        if (s[i]>=65 && s[i]<=90){
            s[i]=tolower(s[i]);
        }
        arr[s[i]-97]++;
    }
    
    for (int i=0;i<26;i++){
        if (arr[i]!=0){

            //static_cast is a casting operator in C++ that performs compile-time type conversions 
            //syntax: static_cast<target_type>(expression)
            // static_cast<char> converts the int to a char
            cout<<"This character is a duplicate: "<< static_cast<char>(i+97)<<endl;
        }
    }
    
} 