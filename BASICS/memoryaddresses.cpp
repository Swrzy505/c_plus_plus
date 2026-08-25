#include<iostream>

int main(){
    // memory addresses = a location in memory where data is stored
    // a memory can be accessed with & (address of operator)

    std::string name = "BRO";
    int age = 18;
    bool student = true;
    char guess = 'O';

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';
    std::cout << &guess << '\n';


    return 0;
}