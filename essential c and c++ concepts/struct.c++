#include <iostream>
#include <stdlib.h>
using namespace std;

//defining a struct
struct callgirl{
    string name;
    int rating;
    string comment;
};

//main function
int main() {
    // Write C++ code here
   
    callgirl r = {"bev",9,"sexy but fat"};
   
    //creating a reference/alternative variable name to r, nickname has the same memory address, name, rating and comment as r
    callgirl &nickname = r;
    nickname.name = "slut";
    nickname.comment = "bev's skills are amazing and I love her lipidy assets";
    cout<<r.name<<endl<<r.comment<<endl;
   

    return 0;
}