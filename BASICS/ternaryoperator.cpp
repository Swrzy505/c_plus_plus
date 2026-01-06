#include <iostream>

int main() {
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    int grade = 75;
    // if(grade >= 60){
    //     std::cout << "you pass!";
    // }else{
    //     std::cout << "you fail!";
    // }

    grade >= 60 ? std::cout << "you pass!\n" : std::cout << "you fail!";

    int number = 9 ;

    number % 2 == 1 ? std::cout << "ODD\n" : std::cout << "EVEN";

    bool hungry = true;  //hungry is already true so no need to write  hungry == true condition
    hungry ? std::cout << "yes" : std::cout << "NO";

    return 0;

}