#include<iostream>
#include <ctime>

int main(){
    int num;
    int guess;
    int tries = 1;

    srand(time(0));
    num = rand() % 20 + 1;

    do{
        std::cout << "Your guess btw (1-20): ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "to high\n";
        }else if(guess < num){
            std::cout << "to low\n";
        }else{
            std::cout << "Correct #num of tries taken to guess : " << tries << '\n';
        }
    }while(guess != num);
    return 0 ;
}