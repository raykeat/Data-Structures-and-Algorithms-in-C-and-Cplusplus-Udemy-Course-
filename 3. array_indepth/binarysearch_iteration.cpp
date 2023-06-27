#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

//Time complexity of O(log2 n) and Ω(1)
int binarysearch(int arr[], int len, int number){
    int l=0;
    int h=len-1;

    while (l<=h){
        int mid = floor((l+h)/2);
        if (arr[mid]==number){
            return mid;
        } else if (number<arr[mid]){
            h=mid-1;

        } else {
            l=mid+1;
        }
    }

    return -1;
}

int main(){
    int arr[10] = {1,2,5,8,9,10,15,18,20,278};
    int index = binarysearch(arr,10,5);
    cout<<index<<endl;

}

