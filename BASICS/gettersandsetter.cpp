#include<iostream>
class stove{
    private:
    int temp = 0;
    public:
    stove(int temp){
        settemp(temp);
    }
    int gettemp(){
        return temp;
    }
    void settemp(int temp){
        this-> temp = temp;
    }

};
int main(){
    // abstraction = hiding unneccesary data from outside class
    // getter = function that makes a private attribute readable
    // setter = function that makes a private attribute writeable
     stove stove1(100) ;
     

     std::cout << stove1.gettemp() << '\n';

    return 0;
}