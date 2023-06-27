#include <iostream>
#include <stdio.h>
#include <cstring>


int main(void){
    char B[]="medical";
    char A[]="decimal";
    if (strlen(B)!=strlen(A)){
        std::cout<<"Not Anagram"<<std::endl;
        return 1;
    }

    //creating array for hashing
    int arr[26]={};
    for (int i=0;i<strlen(B);i++){
        arr[B[i]-97]++;
    }
    for (int j=0;j<strlen(A);j++){
        if (arr[A[j]-97]==0){
            std::cout<<"Not Anagram"<<std::endl;
            return 1;
        }
    }
    std::cout<<"Anagram"<<std::endl;
    return 0;

}