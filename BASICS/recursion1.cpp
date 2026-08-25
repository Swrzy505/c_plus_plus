#include<iostream>

int factorial(int n){
    if(n > 1){
  return n * factorial(n - 1);
    }
 return n;
}
int main(){
    std::cout << factorial(5);
 return 0;
}