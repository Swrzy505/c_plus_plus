#include<iostream>

int main(){
    int rows;
    int cols;
    char symbol;

    std::cout << "Enter the no. of rows: ";
    std::cin >> rows;

    std::cout << "Enter the no.of cols: ";
    std::cin >> cols;

    std::cout << "Enter the symbol: ";
    std::cin >> symbol;

    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=cols;j++){
            std::cout << symbol ;
        }
        std::cout << '\n';
    }
    
    return 0;
}