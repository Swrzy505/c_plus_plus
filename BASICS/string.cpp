#include<iostream>
// string methods
int main(){
    std::string name;

    std::cout << "enter your name: ";
    std::getline(std::cin,name);

    // length method

    // if(name.length() >= 15){
    //     std::cout << "your name can't be greate than 12 \n";
    // }else{
    //     std::cout << "welcome " << name;
    // }

    //empty method 

    // if(name.empty()){
    //     std::cout << "your name is empty";
    // }else{
    //     std::cout << name;
    // }

    // clear method

    // name.clear();
    // std::cout << "Hello" << name;

    // append method

    // name.append("@gmail.com");
    // std::cout << "you email is : " << name;

    // at method

    // std::cout << name.at(0);

    // insert method
    // name.insert(2,"@");
    // std::cout << name;

    // find method
    // std::cout << name.find(" ");

    // erase method

    name.erase(0,3);
    std::cout << name;


    return 0;
}