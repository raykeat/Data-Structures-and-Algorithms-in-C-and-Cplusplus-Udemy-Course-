#include <iostream>
#include <stdlib.h>
#include <stdio.h>

//using bitwise operation to find duplicates in a string
int main(){
    char A[]="finding";
    long int H=0, x=0;

    for (int i=0; A[i]!='\0' ; i++){
        //assigning 1 to the rightmost bit of x for every iteration
        x=1;
        //shifting 1 by a certain no of bits depending on ASCII code for the char
        x=x<<A[i]-97;

        // if both x and H have 1 in the same bit position
        if ((x&H)>0){
            std::cout<<(A[i])<<" is a duplicate char"<<std::endl;
        } 
        // if H does not have 1 in bit position, then assign 1 to bit position of H
        else{
            H = x|H;
        }
    }

    return 0;
}