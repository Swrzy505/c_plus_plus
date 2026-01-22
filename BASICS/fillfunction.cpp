#include<iostream>

int main(){
    // fill() = fills a range of elements with a specified value fill(begin,end,value)
    const int size = 99;
    std::string arr[size];

    fill(arr,arr + (size/3),"pizza");
    fill(arr + (size/3),arr + (size/3)*2,"hamburger");
    fill(arr + (size/3)*2,arr + size,"sushi");
    
    for(std::string food : arr){
        std::cout << food << '\n';
    }


    return 0;
}