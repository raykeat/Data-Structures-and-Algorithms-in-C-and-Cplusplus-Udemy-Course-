//Time complexity of O(log2 n) and Ω(1)

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int binarysearch(int arr[], int number){
    //When you declare a variable as static inside a function, 
    //its initialization statement is executed only once, during the first call to the function.
    static int l=0;
    static int h=9;
    static int mid = floor((l + h) / 2);

    //base case 1: if number is not found in array
    if (l > h){
        return -1;
    }

    //recursive cases
    else {
        

        //base case 2: if number is found
        if (arr[mid] == number) {
            return mid;
        }
        else if (number < arr[mid]) {
            h = mid - 1;
            mid = floor((l + h) / 2);
            return binarysearch(arr, number);
        } else {
            l = mid + 1;
            mid = floor((l + h) / 2);
            return binarysearch(arr, number);
        }
    }
}

int main(){
    int arr[10] = {1,2,5,8,9,10,15,18,20,278};
    int index = binarysearch(arr, 5);
    cout << index << endl;
    return 0;
}