#include <iostream>

using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
    //unparameterized constructor
    Rectangle(){
        length=breadth=1;
    }
    //parameterized constructor
    Rectangle(int l, int b);
   
    int area();
    int perimeter();
    int get_length(){
        return length;
    }
    void set_length(int l){
        length = l;
    }
   
    //destructor
    ~Rectangle();
};

//using scope operator for parameterized constructor
Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}

//destructor function
Rectangle::~Rectangle(){
   
}

int Rectangle::area(){
    return (length * breadth);
}

int Rectangle::perimeter(){
    return (2*(length+breadth));
}

int main() {
    Rectangle r(5,6);
   
    cout <<r.perimeter()<<endl;
    cout <<r.area()<<endl;
    return 0;
}