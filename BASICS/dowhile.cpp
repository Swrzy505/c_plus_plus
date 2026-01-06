#include<iostream>

int main(){

    int number;

    do{
        std::cout << "enter a +ve num : ";
        std::cin >> number;
    } while(number < 0);
    std::cout << "this is the +ve num: " <<number;

    return 0;
}