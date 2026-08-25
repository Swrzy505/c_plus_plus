#include<iostream>

int fac (int num){
    int fact = 1; 
    for(int i = 1;i <= num ;i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    std::cout << fac(5);
    return 0;
}