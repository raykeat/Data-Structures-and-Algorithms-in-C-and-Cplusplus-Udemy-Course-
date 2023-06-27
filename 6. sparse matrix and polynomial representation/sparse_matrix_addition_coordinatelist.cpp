#include <iostream>
#include <stdlib.h>
#include <stdio.h>

//element class contains row, column and value
class Element{
    public:
        int i;
        int j;
        int x;
};

class sparse{
    public:
        //total no of rows
        int m;
        //total no of columns
        int n;
        //total no of non-zero values
        int num;
        //pointer to array containing elements
        Element *e;
        
        //parameterized constructor
        sparse(int m, int n, int num){
            this->m = m;
            this->n = n;
            this->num = num;
            e = new Element[num];
        }
        
        //unparameterized constructor
        sparse(){
            
        }
        
        //destructor
        ~sparse(){
            delete []e;
        }
        
        //read function to get input for non zero elements
        void read();
    
        //display function
        void display();
};

void sparse::read(){
    std::cout<<"Enter non-zero elements: "<<std::endl;
    for (int i=0;i<num;i++){
        std::cin>>e[i].i>>e[i].j>>e[i].x;
    }
}

void sparse::display(){
    int k=0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if ((i==e[k].i)&&(j==e[k].j)&&(k<num)){
                std::cout<<e[k].x<<" ";
                k++;
            } else{
                std::cout<<"0 ";
            }
        }
        std::cout<<std::endl;
    }
};

sparse * add(sparse *s1, sparse *s2){
    //checking if dimensions of both sparse matrixes are equal
    if ((s1->m==s2->m)&&(s1->n==s2->n)){
        
        //declaring and allocating memory for a pointer to a new sparse object
        sparse *sum = new sparse(s1->m,s1->n,s1->num+s2->num);
        
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
                
                //if column number of element of first matrix
                //is more than column number of element of 2nd matrix
                else if (s1->e[a].j > s2->e[b].j){
                    sum->e[k++] = s2->e[b++];
                } 
                
                //if column and row numbers are the same for elements in both matrixes
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
        sparse * empty= new sparse;
        empty->m = 0;
        empty->n = 0;
        empty->num = 0;
        empty->e = NULL;
        return empty;
    }
}


int main() {
    sparse m1(2,2,1);
    m1.read();

    sparse m2(2,2,1);
    m2.read();
    
    sparse *s3 = add(&m1,&m2);
    s3->display();
    
    delete s3;
    return 0;
}