#include<iostream>

namespace f {
    int x = 1;
}
namespace s {
    int x = 2;
}

int main(){
    // used for name conflicts in large projects. each entity needs a unique name. a namespace allows for identically named entities as long as the namespaces are different. 
    using namespace f; //using namespace of f so we dont have to use prefix

    //we use namespace std to for less typing but it can create naming conflicts mostly for large projects because it has 100 of name but we can type using std::cout , std::string for specificity

    std::cout << x << "\n";


    return 0;
}