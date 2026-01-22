#include<iostream>

int main(){
    std::string students[] = {"shikhar","patrick","squidward"};

    for(int i=0;i < sizeof(students)/sizeof(std::string);i++){
       std::cout << students[i] << '\n';
    }

    char grades[] = {'a','b','c','d','e'};

    for(int i = 0; i < sizeof(grades)/sizeof(char);i++){
        std::cout << grades[i] << '\n';
    }

    return 0;
}