#include <stdio.h>
#include <stdlib.h>

//creating a sparse matrix where the non zero values are represented by coordinate lists

//struct element contains row, column and value
struct Element{
    int i;
    int j;
    int x;
};

struct sparse{
    //total no of rows
    int m;
    //total no of columns
    int n;
    //total no of non-zero values
    int num;
    //pointer to array containing struct elements
    struct Element *e;
};

//creating a sparse matrix
void create(struct sparse *ptr){
    printf("Enter dimensions: ");
    scanf("%d %d",&ptr->m,&ptr->n);
    printf("Enter no of non-zero values: ");
    scanf("%d",&ptr->num);
    
    ptr->e = (struct Element *)malloc(sizeof(struct Element)*(ptr->num));
    
    printf("Enter all elements: ");
    for(int a=0;a<ptr->num;a++){
        scanf("%d %d %d",&ptr->e[a].i,&ptr->e[a].j,&ptr->e[a].x );
    }
    
};

void display (struct sparse matrix){
    int k=0;
    for (int i=0;i<matrix.m;i++){
        for (int j=0;j<matrix.n;j++){

            if ((i==matrix.e[k].i) && (j==matrix.e[k].j) && (k<matrix.num)){
                printf("%d ",matrix.e[k].x);
                k++;
            } else{
                printf("0 ");
            }
        }
        printf("\n");
    }
};

int main() {
    struct sparse matrix;
    create(&matrix);
    display(matrix);
    return 0;
}

