// finding duplicates in a string using hashing
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[]= "hello I love your mom";
    int len = strlen(s);
    
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
            printf("%s %c\n","This character is a duplicate: ",i+97);
        }
    }
    
} 