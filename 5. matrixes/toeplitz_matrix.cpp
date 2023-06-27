// Online C++ compiler to run C++ program online
#include <iostream>

//C++ class for toeplitz matrix
class matrix{
    public:
        //pointer to array to store values
        int *a;
        //n by n matrix
        int n;
    
        matrix (int b){
            n = b;
            a = new int[2*b-1];
        }
        
        void set(){
            for (int i=0;i<2*n-1;i++){
                int x;
                std::cout<<"Enter number: "<<std::endl;
                std::cin>>x;
                a[i]=x;
            }
        }
        
        int get(int i, int j);
        void display();
};

//function with scope resolution operator
int matrix::get(int i, int j){
    while ((i!=1) && (j!=1)) {
        i--;
        j--;
    }
    if (i==1){
        return a[j-1];
    } else{
        return a[n+i-1];
    }
}

void matrix::display(){
    for (int i=1;i<n+1;i++){
        for (int j=1;j<n+1;j++){
            if (j>=i){
                std::cout<<a[j-i]<<" ";
            } else{
                std::cout<<a[n-1+i-j]<<" ";
            }
        }
        std::cout<<std::endl;
    }
}

int main() {
    matrix m(4);
    m.set();
    std::cout<<m.get(3,2)<<std::endl;

    return 0;
}