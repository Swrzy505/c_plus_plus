#include<iostream>
#include <vector>

// typedef std::vector<std::pair<std::string,int>> pairlist_t;

typedef std::string text_t;
typedef int num_t;

int main(){
    // typedef = reserved keyword used to create an additional name (alias) for another data type.New identifer for an existting type helps with readibiltiy and reduces typos 
    text_t firstname = "Shikhar";
    std::cout << firstname << '\n';
    num_t age = 19;
    std::cout << age << '\n';
    return 0;
}