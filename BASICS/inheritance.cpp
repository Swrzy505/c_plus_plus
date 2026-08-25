#include<iostream>

class animal{
    public:
    bool alive = true;
    void eat(){
        std::cout << "This animal is eating\n";
    }
};

class dog : public animal{
public:

void bark(){
    std::cout << "the dog goes woof" << '\n';
}
};

class cat : public animal{
    public:

    void meow(){
        std::cout << "The car goes meow" << '\n';
    }
};
int main(){
    // inheritance = a class can receive attributes and methods from another class children classes inherit from a parent class helps to reuse similar code found within multiple classes
    dog dog;
    cat cat;
    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();
    cat.meow();

    return 0;
}