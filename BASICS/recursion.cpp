#include<iostream>

void walk(int steps){
    for(int i = 0;i < steps;i++){
        std::cout << "You take a step" << '\n';

    }
}
void  walk1(int steps){
    if(steps > 0){
        std::cout << "You take a step" << '\n';
        walk1(steps - 1);
    }
}

int main(){
    /*recursion = a programming technique where a function invokes itself form within break a complex concept into a repeatable single step*/

    // (iterative vs recursion)ww
    // advantages = less code and is cleaner
    //              useful for sorting and searching algortihms

    // disadvantages = uses more memory,  slower

    // iterative method 
    // walk(100);
    // recursive method
    walk1(100); 
}