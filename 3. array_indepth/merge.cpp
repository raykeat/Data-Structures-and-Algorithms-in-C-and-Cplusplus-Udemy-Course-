#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;

//merge 2 sorted arrays
void merge(vector<int> a, vector<int> b){
    int i=0;
    int j=0;
    int k=0;

    
    int lengthfirst = a.size();
    int lengthsecond = b.size();
    int c[lengthfirst+lengthsecond];

    while (i < lengthfirst || j < lengthsecond) {
        if (i == lengthfirst) {
            c[k++] = b[j++];
        } else if (j == lengthsecond) {
            c[k++] = a[i++];
        } else if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    for (int i = 0; i < k; i++) {
        cout << c[i] << endl;
    }
}

int main() {
    vector<int> A = {2, 3, 15, 37, 69};
    vector<int> B = {4, 24, 38, 46, 70};
    merge(A, B);

    return 0;
}