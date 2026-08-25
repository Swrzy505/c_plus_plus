#include<iostream>
template <typename T,typename U> //it'll look fo rthe mathcing data type in the input

auto max(T x, U y){
    return (x > y) ? x : y;
}
// like a cookie cutter cookies are the same, but the dough is different

int main(){

    // func template = describes what a function looke likes.
    // can be used to generate as many overlaoded functions as needed , each using different data types.
    
    std::cout << max(1,2.2) << '\n';
}