#include<iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled;
};


int main(){
    // struct  = a strucutre that group related variable under one name structs can contain many different data types(String,int,doubles,bool,variables in a struct are known as "members") members can access with . class member accsess operation"

    student student1;
    student1.name = "Shikhar";
    student1.gpa = 4.0;
    student1.enrolled = true;

    student student2;
    student2.name = "farhan";
    student2.gpa = 4.0;
    student2.enrolled = true;

    student student3;
    student3.name = "kavan";
    student3.gpa = 4.0;
    student3.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';

    
    return 0;
}