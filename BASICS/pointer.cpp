#include<iostream>

int main(){
    //pointers = variable that stores a memory address of another sometimes it is easy to work with the address

    // & - address of operator
    // * - dereference operator
    std::string name = "bro";
    int age = 19;
    std::string freepizza[5] = {"Pizza0","Pizza1","Pizza2","Pizza3","Pizza4",};
     

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreepizza = freepizza;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFreepizza << '\n';

    return 0;
}