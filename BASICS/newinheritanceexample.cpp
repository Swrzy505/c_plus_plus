#include<iostream>

class shape{
    public:
    double area;
    double vol;
};

class cube : public shape{
  public:
  double side;
 cube(double side){
 this->side = side;
 this->area = side*side*6;
 this->vol = side * side * side;
 }
};
class sphere : public shape{
    public:
    double radius;
    sphere(double radius){
 this->radius = radius;
 this->area = 4 * 3.14159 * (radius * radius );
 this->vol = (4/3.0) * 3.14159 * (radius * radius*radius); 
    }
};

int main(){
cube cube(10);
sphere sphere(4);

std::cout << "cube area : " << cube.area << "cm^2\n";
std::cout << "cube vol : " << cube.vol << "cm^3\n";
std::cout << "sphere area : " << sphere.area << "cm^2\n";
std::cout << "sphere vol : " << sphere.vol << "cm^3\n";

    return 0;
}