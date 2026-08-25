#include<iostream>

class human{
    public:
        std::string name = "shikhar"; //attributes
        std::string occu = "polymath";
        int age = 19;

        void eat(){//methods
            std::cout << "this person is eating\n";
        }
        void drink(){
            std::cout << "THIS PERSON IS DRINKING\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }


};

int main(){
    // object =  a collection of attributes and methods they can have characterstics and could perfrom actiond can be used to mimic real world items (ex. phone,book,dog)created from a class which acts as a "blue-print"
    human human1;
    human human2;


    std::cout << human1.name << '\n';
    std::cout << human1.occu << '\n';
    std::cout << human1.age << '\n';
    std::cout << human2.name << '\n';
    std::cout << human2.occu << '\n';
    std::cout << human2.age << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();
    

    

    return 0;
}