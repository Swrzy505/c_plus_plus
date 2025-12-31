#include<iostream>

int main(){
    // if statements = do something if a condition is true if not then dont do it.
    int age;

    std::cout <<"Enter your age: ";
    std::cin >> age;

    if(age >= 100){
        std::cout << "very old my brotha";
    }
    else if(age >= 18){
        std::cout << "yes";
    }
    else if(age < 0){
        std::cout << "you haven't been born yet chill my g";
    }
    else {
        std::cout << "NO";
    }
    return 0 ;
}