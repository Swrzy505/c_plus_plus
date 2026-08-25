#include<iostream>

class car {
    public:
    std::string make;
    std::string model;
    std::string color;
    int year;

    void acc(){
        std::cout << "You step on the gas\n";
    }
    void brake(){
        std::cout << "you step on the brakes\n";
    }

};

int main(){

    car car1;

    car1.make = "ford";
    car1.model = "mustang";
    car1.year = 2023;
    car1.color = "silverl";

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.acc();
    car1.brake();

    return 0;
}