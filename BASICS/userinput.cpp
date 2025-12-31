#include<iostream>

int main(){
    // cout << insertion operator
    // cin >> extraction operator


    std::string name;
    int age;

    std::cout << " what's your age?: ";
    std::cin >> age;

    std::cout << "what's your full name?: ";
    std::getline(std::cin >> std::ws,name); // to get the full name with space between if it 
    // if we cin for user input before getline there is a new line buffer so it catches is so to remove it we use >> std::ws white space

    
    
    std::cout << "Hello " << name;
    std::cout << "You're " << age << " years old";


    return 0;
}