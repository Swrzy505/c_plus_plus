#include<iostream>

int main(){
    // null value = a speacial value that means something has no value when a pointer is holding a null value
    // that pointer is not pinting at anything (null pointer)
    // nullptr = keyword represents a null pointer literal
    // nullptrs are helpful  when determining if an address was successfully assigned to a pointer

    int *pointer = nullptr;
    int x = 123;


    if(pointer == nullptr){
        std::cout << "value not assigned"; 
    }
    else{
        std::cout << "value assigned";
    }


    return 0;
}