#include<iostream>

struct car{
    std::string model;
    int year;
    std::string color;

};
void printcar(car &car);
void paintcar(car &car,std::string color);
int main(){
    car car1;
    car car2;

    car1.model = "Mustang";
    car1.year = 2020;
    car1.color = "red";

    car2.model = "corvette";
    car2.year = 2021;
    car2.color = "blue";

    std::cout << &car1 << '\n'; 

    paintcar(car1,"silver");
    paintcar(car2,"gold");

    std::cout << &car2 << '\n'; 
    printcar(car1);
    printcar(car2);

    return 0;
}

void printcar(car &car){
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';

}

void paintcar(car &car,std::string color){
    car.color = color;   
}