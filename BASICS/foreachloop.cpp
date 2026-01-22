#include<iostream>

int main(){
    // for each loop = loop that eases the traversal over an iterable data set(array)

    int grades[] = {65,81,82,33,91};
    for (int grade : grades){
        std::cout << grade << '\n'; 
        }

    // std::string students[] = {"spongebob","patrick","squidward"};

    // for(int i = 0;i < sizeof(students)/sizeof(std::string);i++){
    //     std::cout << students[i] << '\n';
    //     students[i] = "spongebob";
    //     break;
    // }

    // for(std::string student : students){
    //     std::cout << student << '\n';
    // }




    return 0;
}