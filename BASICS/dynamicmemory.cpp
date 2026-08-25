#include<iostream>

int main(){
    // dynamic memory = Memory that is allocated after the program is already compiled & running.
    // Use the 'new' operator to allocate memory in the heap rather than the stack.
    // Useful when we don't know how much memory we will need. 
    // Makes our programs more flexible, especially when accepting user input.

    // int *pnum = NULL;
    // pnum = new int;

    // *pnum = 21;

    // std::cout << "address:" << pnum << '\n';
    // std::cout << "values:" << *pnum << '\n';

    // delete pnum;

    char *pgrades = NULL;
    int size;
    std::cout << "How many grades to enter in? : " ;
    std::cin >> size;

    pgrades = new char[size];

    for(int i=0;i < size ; i++){
        std::cout << "enter grade #" << i + 1 << ":" <<'\n';
        std::cin >> pgrades[i] ;

    }
    for(int i=0; i < size ;i++){
        std::cout << pgrades[i] << '\n';
    }

    delete[] pgrades;

    return 0;
}