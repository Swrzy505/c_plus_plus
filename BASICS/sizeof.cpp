#include<iostream>

int main(){
    // sizeof = determines the size in bytes of a:
    // variable,datatype.class.objects,etc .
    std::string name = "BRO";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'a','b','c','d','e'};
    std::string students[] = {"Shikhar","Arya","Tejas","Manas"};

    std::cout << sizeof(students)/sizeof(std::string) << " elements";

    return 0;
}