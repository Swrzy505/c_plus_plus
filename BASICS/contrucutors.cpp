#include<iostream>

class stud{
    public:
    std::string name;
    int age;
    double gpa;

    stud(std::string x,int y,double z){
        name = x;
        age = y;
        gpa = z;

        

    }
};
class car{
    public:
    std::string make;
    std::string model;
    int year;
    std::string color;

    car(std::string make,std::string model,int year,std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;

    }
};
int main(){

//constructor = special method that is automatically called when an object is instantiated useful for assigning  values to attributes as arguments

stud stud1("spongebob",25,3.2);
stud stud2("patrick",40,1.6);
stud stud3("sandy",21,5.0);


std::cout << stud3.name << '\n';
std::cout << stud3.age << '\n';
std::cout << stud3.gpa << '\n';

car car1("chevy","corvette",2022,"blue");
car car2("ford","mustang",2023,"red");

std::cout << car2.make << '\n';
std::cout << car2.model << '\n';
std::cout << car2.year<< '\n';
std::cout << car2.color << '\n';

return 0;
}