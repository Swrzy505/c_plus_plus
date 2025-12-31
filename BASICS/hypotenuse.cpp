#include<iostream>
#include<cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;

    // c = sqrt((a*a) + (b*b));
    // a = pow(a,2);
    // b = pow(b,2);

    c = sqrt(pow(a,2) + pow(b,2));

    std::cout << c ;


    return 0;
}