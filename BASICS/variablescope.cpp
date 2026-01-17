#include<iostream>
int mynum = 3;

void printnum(){
    int mynum = 2;
    std::cout << mynum << '\n';
}
int main(){
    // local variables = declared inside a functino or block{}
    // global variables = declared outside of all functions
    int mynum = 1;
    printnum();
    std::cout << ::mynum << '\n';
    // :: is the resoltion scope changing it to global scope from local scope


    return 0;
}