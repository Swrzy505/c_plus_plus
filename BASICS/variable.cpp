#include <iostream>

int main(){
    int x; //declaration
    x = 5; //assignment
    int y = 6;
    int sum = x + y;

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum << "\n";

    // integer (whole number)
    int age = 19;
    int year = 2024;
    int days = 7.5; //print 7 not 7.5

    std::cout << days << "\n" ;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 9.8;
    double temp = 25.1;

    std::cout << price << "\n" ;

    // char (single character)
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << grade << '\n';

    // boolean (true or false)
    bool student = true;
    bool forSale = true;
    bool power = true;

    // string 
    std::string name = "Shikhar";
    std::cout << name << '\n';
    std::string food = "pizza";
    std::string addr = "123 fake street";

    std::cout << "Hello " << name << '\n';
    std::cout << "you are " << age << " years old";



    return 0;
}