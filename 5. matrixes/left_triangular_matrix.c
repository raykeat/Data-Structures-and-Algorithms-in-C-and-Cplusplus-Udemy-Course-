#include <stdio.h>
#include <stdlib.h>

// lower left triangular matrix in C
struct matrix{
    //n by n matrix
    int n;
    //pointer to array to store non zero values of matrix
    int *a;
};

void set(struct matrix *p, int i, int j, int x){
    if (i>=j){
        p->a[i*(i-1)/2+j-1]=x;
    }
}

int get(struct matrix m, int i, int j){
    if (i>=j){
        printf("%d\n", m.a[i*(i-1)/2+j-1]);
        return m.a[i*(i-1)/2+j-1];
    } else{
        printf("0\n");
        return 0;
    }
}

void display(struct matrix m){
    for (int i=1;i<m.n+1;i++){
        for (int j=1;j<m.n+1;j++){
            if (i>=j){
                printf("%d ",m.a[i*(i-1)/2+j-1]);
            } else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
   
int main() {
   
    struct matrix m = {5,};
    m.a = (int *)malloc(sizeof(int)*(m.n*(m.n+1)/2));
    for (int i=1;i<m.n+1;i++){
        for (int j=1;j<=i;j++){
            int x;
            printf("Enter number at position (%d,%d)\n" ,i,j);
            scanf("%d",&x);
            set(&m,i,j,x);
        }
    }
    display(m);
    free(m.a);
}