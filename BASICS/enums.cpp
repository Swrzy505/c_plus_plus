#include<iostream>

enum day  {sunday = 0,monday = 1};
enum month{jan = 0,feb = 1,mar = 2,apr = 3,may = 4,jun = 5,jul = 6};

int main(){

    // enums = a user -defined data type that consisits of paired named-integer constants. Great if you have a set of potential opetions

   month moth = jan;

    switch(moth){

        case jan: std::cout << "It is january!\n";
                        break;
        case 1:std::cout << "It is monday!\n";
                        break; 
    }
    return 0;
}