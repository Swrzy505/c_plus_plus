#include <iostream>
#include <ctime>

int main(){
    
    srand(time(0));

    int randnum = rand() % 5 + 1; // 1 to 5 range 0,1,2,3,4

    switch(randnum){
        case 1:std::cout << "You win 1";
        break;
        case 2:std::cout << "You win 2";
        break;
        case 3:std::cout << "You win 3";
        break;
        case 4:std::cout << "You win 4";
        break;
        case 5:std::cout << "You win 5";
        break;
    }
    return 0;
}