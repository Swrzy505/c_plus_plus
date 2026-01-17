#include<iostream>

void hbd(std::string name, int age){
    std::cout << "HBD!!\n";
    std::cout << "HBD!!\n";
    std::cout << "HBD!!\n";
    std::cout << "HBD!!\n";
    std::cout << "HBD!!\n";
    std::cout << name << '\n';
    std::cout << age << '\n';

}
int main(){
    // function = it is a block of reusable code.
   std::string name  = "shikhar";
   int age = 19;

   hbd(name,age);

    return 0;
}

