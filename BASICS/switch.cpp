#include <iostream>

int main() {
 int month;
 std::cout << "Enter your month Number: ";
 std::cin >> month;

 switch(month){
    case 1:
    std::cout << "jan";
    break;

    case 2:
    std::cout << "feb";
    break;
    case 3:
    std::cout << "mar";
    break;
    case 4:
    std::cout << "apr";
    break;
    case 5:
    std::cout << "may";
    break;
    case 6:
    std::cout << "jun";
    break;
    case 7:
    std::cout << "jul";
    break;
    case 8:
    std::cout << "aug";
    break;
    case 9:
    std::cout << "sep";
    break;
    case 10:
    std::cout << "oct";
    break;
    case 11:
    std::cout << "nov";
    break;
    case 12:
    std::cout << "dihcember";
    break;
    default:
    std::cout << "please enter num bet 1-12";
}
return 0;
}