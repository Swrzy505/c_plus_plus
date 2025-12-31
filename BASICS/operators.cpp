#include<iostream>

int main(){

    // order of precendence  () > *,/ > +,-;
    // arithmetic operators(+,-,*,/)
    // add
    int students = 20;
    students += 1;
    students++;
    std::cout << students << '\n';
    
    // subtract
    students -=1;
    students -=2;
    students--;

    std::cout << students << '\n';
    

    // multiplication
    students*=2;
    students = students*2;

    std::cout << students << std::endl;

    // division
    // students/=2;
    students/=3;

    std::cout << students << std::endl;

    int remainder = students % 3;
    std::cout << remainder << std::endl;

    int student1 = 6 - 5 + 4 * 3 / 2 + (4+2);

    std::cout << student1 <<std::endl;

    return 0;

}