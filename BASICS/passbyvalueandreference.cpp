#include<iostream>

void swap(std::string &x, std::string &y){
std::string temp;

temp = x ;
x = y;
y = temp;

std::cout << &x <<'\n';
std::cout << &y << '\n';



}

int main(){
    std::string x = "bro";
    std::string y = "Code";
    
    swap(x,y);

    std::cout << &x <<'\n';
    std::cout << &y << '\n';
    return 0;
}