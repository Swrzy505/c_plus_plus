#include<iostream>

int main(){

    // && = check if two conditions are true
    // || = check if the least one of the two conditions is true
    // ! = reverses the logical state of its logical oprator

    // int temp;
    bool sunny = true;

    // std::cout << "enter the temperature: ";
    // std::cin >> temp;

    // if(temp > 0 && temp < 30){
    //     std::cout << "the temp is good\n";

    // }else{
    //     std::cout << "the temp is bad\n";
    // }

    // if(temp <= 0 || temp >= 30){
    //     std::cout << "the temp is good\n";

    // }else{
    //     std::cout << "the temp is bad\n";
    // }
    
    if(!sunny){
        std::cout << "it is sunny outside\n";
    }else{
        std::cout << "it is cloudy outside\n";
    }
    
 
    return 0;
}