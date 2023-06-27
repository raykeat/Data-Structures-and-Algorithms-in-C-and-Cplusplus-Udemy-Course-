#include <iostream>
#include <stdio.h>
#include <stdlib.h>

// lower left triangular matrix class in C++
class matrix{
    private:
        //n by n matrix
        int n;
        //pointer to array to store non zero values of matrix
        int *a;
   
    public:
        //parameterized constructor
        matrix(int b){
            n=b;
            a=new int[n*(n+1)/2];
        }
       
        //member functions
        void set(int i, int j, int x){
            if (i>=j){
                a[i*(i-1)/2+j-1]=x;
            }
        }
       
        int get(int i, int j){
            if (i>=j){
                std::cout<<a[i*(i-1)/2+j-1]<<std::endl;
                return a[i*(i-1)/2+j-1];
            } else{
                std::cout<<0<<std::endl;
                return 0;
            }
        }
       
        void display(){
            for (int i=1;i<n+1;i++){
                for (int j=1;j<n+1;j++){
                    if (i>=j){
                        std::cout<<a[i*(i-1)/2+j-1]<<" ";
                    } else{
                        std::cout<<0<<" ";
                    }
                }
                std::cout<<std::endl;
            }
        }
       

};
   
int main() {
   
    matrix m(5);
    for (int i=1;i<6;i++){
        for (int j=1;j<=i;j++){
            int x;
            //printf("Enter number at position (%d,%d)\n" ,i,j);
            std::cout<<"Enter number at position ("<<i<<","<<j<<")"<<std::endl;
            std::cin>>x;
            m.set(i,j,x);
        }
    }
    m.display();


}
