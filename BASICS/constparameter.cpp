#include<iostream>

void constpara(const std::string &name,const int &age){
    // name = "shikhar";
    // age = 19;
    std::cout << name <<'\n';
    std::cout << age <<'\n';
}

int main(){
    // const parameter  = parameter that is effectively read only code is more secure and conveys intent useful for references and pointers.

    std::string name = "BROCODE";
    int age = 19;

    constpara(name,age);


    return 0;
} 