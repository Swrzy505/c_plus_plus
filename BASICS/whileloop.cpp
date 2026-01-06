#include<iostream>

int main(){
    std::string name;

    while(name.empty()){  //repeats the code to force user to do something and system
    std::cout << "Enter your name:";
    std::getline(std::cin,name);
    }


    std::cout << "Hello " << name;
    return 0 ;
    // while(1==1){
    //     std::cout << "Help!!!";
    // }
    // return 0;
}