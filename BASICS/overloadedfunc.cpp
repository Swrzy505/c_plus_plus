#include<iostream>
// function overloading
void bakeb(){
    std::cout << "Here is your burger!!\n";
}
void bakeb(std::string topping){
    std::cout << "here is your " << topping << " pizza\n";
}
int main(){

    bakeb();
    bakeb("pepperoni");

    return 0;
}
// function can have same names but you need different set of parameters 
// function name with parameters is known as function signature
// each needs to be unique