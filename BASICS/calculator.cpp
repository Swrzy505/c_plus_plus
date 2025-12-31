#include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double res;

    std::cout << "******CALCULATOR******\n";

    std::cout << "Enter either (+,-,*,/): ";
    std::cin >> op;

    std::cout << "num1: ";
    std::cin >> num1;

    std::cout << "num2: ";
    std::cin >> num2;

    switch(op){
        case '+':
        res = num1 + num2;
        std:: cout << "res: " << res <<'\n' ;
        break;
        case '-':
        res = num1 - num2;
        std:: cout << "res: " << res <<'\n' ;
        break;
        case '*':
        res = num1 * num2;
        std:: cout << "res: " << res <<'\n' ;
        break;
        case '/':
        res = num1 / num2;
        std:: cout << "res: " << res <<'\n' ;
        break;
        default :
        std::cout << "only the operator which are mentioned\n";
    }



    std::cout << "**********************";



    return 0;
}