#include <stdio.h>
#include <stdlib.h>

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

void display(struct sparse s){
    int k=0;
    for (int i=0;i<s.m;i++){
        for (int j=0;j<s.n;j++){
            if ((i==s.e[k].i)&&(j==s.e[k].j)&&(k<s.num)){
                printf("%d ",s.e[k].x);
                k++;
            } else{
                printf("0 ");
            }
        }
        printf("\n");
    }
};

struct sparse * add(struct sparse *s1, struct sparse *s2){
    //checking if dimensions of both sparse matrixes are equal
    if ((s1->m==s2->m)&&(s1->n==s2->n)){
        
        //declaring and allocating memory for a pointer to a new struct sparse
        struct sparse *sum = (struct sparse *)malloc(sizeof(struct sparse));
        
        //assigning values to attributes of new struct sparse
        sum->m = s1->m;
        sum->n = s1->n;
        sum->e = (struct Element *)malloc(sizeof(struct Element)*(s1->num+s2->num));
        
        int a,b,k;
        a=b=k=0;
        //iterating over all non-zero values of both sparse matrixes
        while (a<s1->num && b<s2->num){
            
            //if row number of element of first matrix
            //is less than row number of element of 2nd matrix
            if (s1->e[a].i < s2->e[b].i){
                sum->e[k++] = s1->e[a++];
            } 
            
            //if row number of element of first matrix
            //is more than row number of element of 2nd matrix
            else if (s1->e[a].i > s2->e[b].i){
                sum->e[k++] = s2->e[b++];
            }
            
            //if row numbers of elements of first and second matrix are the same
            else{
                
                //if column number of element of first matrix
                //is less than column number of element of 2nd matrix
                if (s1->e[a].j < s2->e[b].j){
                    sum->e[k++] = s1->e[a++];
                } 
                
                else if (s1->e[a].j > s2->e[b].j){
                    sum->e[k++] = s2->e[b++];
                } 
                
                else{
                    sum->e[k] = s1->e[a];
                    sum->e[k].x = s1->e[a].x + s2->e[b].x;
                    k++;
                    a++;
                    b++;
                }
            }
        }
        // copy any remaining elements from the first matrix
        while (a < s1->num) {
            sum->e[k++] = s1->e[a++];
        }

        // copy any remaining elements from the second matrix
        while (b < s2->num) {
            sum->e[k++] = s2->e[b++];
        }
        sum->num = k;
        return sum;
    } 
    
    //if dimensions of 2 matrixes are not equal
    else {
        printf("Matrix dimensions are not equal.\n");
        // returning an empty sparse matrix
        struct sparse * empty=(struct sparse *)malloc(sizeof(struct sparse));
        empty->m = 0;
        empty->n = 0;
        empty->num = 0;
        empty->e = NULL;
        return empty;
    }
}


int main() {
    struct sparse m1;
    create(&m1);
    
    struct sparse m2;
    create(&m2);
    
    struct sparse *s3 = add(&m1,&m2);
    
    display(*s3);
    
    free(m1.e);
    free(m2.e);
    free(s3->e);
    free(s3);
    
    return 0;
}