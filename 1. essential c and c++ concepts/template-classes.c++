#include <iostream>

using namespace std;

template<class T>
class arithmetic{
    private:
        T a;
        T b;

    public:
        arithmetic(T a, T b);
        T add();
        T subtract();
};


//parameterized constructor
//int a and int b are parameters (that we type) to the constructor 
//'this' is a special pointer that points to the current object instance
//this->a and this->b refer to the member variables of the class arithmetic

template<class T>
arithmetic<T>::arithmetic(T a,T b){
    this->a=a;
    this->b=b;
}

template<class T>
T arithmetic<T>::add(){
    return (a+b);
}

template<class T>
T arithmetic<T>::subtract(){
    return(a-b);
}

int main(){
    arithmetic<int> w (5,6);
    cout<<w.add()<<endl;
}

