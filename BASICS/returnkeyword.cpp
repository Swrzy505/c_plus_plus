#include<iostream>
double square(double length){
    return length * length;
}
double vol(double length){
    return length * length * length;
}
std::string concatstr(std::string string1,std::string string2){
    return string1 + " " + string2;
}
int main(){
    double area = square(1.5);
    double volume = vol(2.5); 
    std::string fname;
    std::string lname;
    std::string fullname = concatstr("shikhar", "singh");
    std::cout << area << "cm2" << '\n';
    std::cout << volume << "cm3 << '\n";
    std::cout << fullname << "\n";
    return 0 ;
}