#include<iostream>

int main(){
    // array = a data structure that can hold multiple values are accsessed by an index number
    // "kind of like a variable that holds multiple values"
    std::string cars[] = {"Mustang","Corvette","camry"};

    cars[0] = "camaro";
    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    // or


    double prices[4];

    prices[0] = 5.99;
    prices[1] = 6.99;
    prices[2] = 5;
    prices[3] = 8.99;

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';   
    std::cout << prices[3] << '\n';

    

    return 0;
}