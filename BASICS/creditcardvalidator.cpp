#include<iostream>

int getdigit(const int number){
 
    return number%10 + (number/10 % 10);

}
int sumevendigits(const std::string cardnum){

    int sum = 0;

    for(int i = cardnum.size()-2;i >= 0; i-=2){
        sum += getdigit((cardnum[i] - '0')*2);
    }
    return sum;

}
int sumodddigits(const std::string cardnum){

    int sum = 0;
    for(int i =cardnum.size()-1;i >= 0;i-=2){
        sum += cardnum[i] - '0';
    }
    return sum;

}

int main(){
    std::string cardnum;
    int result = 0;

    std::cout << "Enter your Card Number :";
    std::cin >> cardnum;

    result = sumevendigits(cardnum) + sumodddigits(cardnum);

    if(result%10 == 0){
        std::cout << "Valid";
    }
    else{
        std::cout << "not valid";
    }

    return 0;
}