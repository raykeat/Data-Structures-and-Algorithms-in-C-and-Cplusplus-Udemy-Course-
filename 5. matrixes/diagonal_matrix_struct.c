#include <stdio.h>
#include <stdlib.h>

//diagonal matrix in C
struct matrix{
    //n by n matrix
    int n;
    //array to store non zero values of matrix
    int A[10];
};

void set(struct matrix *p, int i, int j, int x){
    if (i==j){
        p->A[j-1]=x;
    }
}

int get(struct matrix m, int i, int j){
    if (i==j){
        printf("%d\n", m.A[i-1]);
        return m.A[i-1];
    }
}

void display(struct matrix m){
    for (int i=0;i<m.n;i++){
        for (int j=0;j<m.n;j++){
            if (i==j){
                printf("%d ",m.A[i]);
            } else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
   
int main() {
   
    struct matrix m = {5,};
    set(&m,1,1,5);
    get(m,1,1);
    display(m);

}