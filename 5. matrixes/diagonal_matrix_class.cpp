#include <iostream>

//diagonal matrix in c++
class matrix{
    private:
        int n;
        int *a;
    public:
        //parameterized constructor for the class
        matrix(int b){
            n = b;
            a = new int[b];
            for (int i=0;i<b;i++){
                a[i]=0;
            }
        }
       
        void set(int i, int j, int x){
            if (i==j){
                a[j-1]=x;
            }
        }
       
        int get(int i, int j){
            if (i==j){
                std::cout<<a[i-1]<<std::endl;
                return a[i-1];
            }
        }
       
        void display(){
            for (int i=0;i<n;i++){
                for (int j=0;j<n;j++){
                    if (i==j){
                        std::cout<<a[i]<<" ";
                    } else{
                        std::cout<<0<<" ";
                    }
                }
                std::cout<<std::endl;
            }
        }
};

int main(){
    matrix m(5);
    m.set(1,1,5);
    m.get(1,1);
    m.display();
}
