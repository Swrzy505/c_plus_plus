#include<iostream>

int main(){
    double temp;
    char unit;
    double F;
    double C;

    std::cout << "*********Temp Conversion***********\n";
    std::cout <<"F = fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "write the celsius value: ";
        std::cin >> C;
        F = (9*C)/5 + 32;
        std::cout << F << " fahrenheit" << '\n';
        
        
    }else if(unit == 'C' || unit == 'c' ){
        std::cout << "Write the fahrenheit value: ";
        std::cin >> F;
 
         C = (F -32) * 5/9;
         std::cout << C << " celsius" << '\n';
    }else{
        std::cout << "null";
    }

    std::cout << "************************************\n";


    return 0;
}