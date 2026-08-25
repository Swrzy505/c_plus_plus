 #include<iostream>

int main(){
    std::string cars[][3] = { {"Mustang","escape","f-150"},
                              {"corvette","equinbox","silverado"},
                              {"ringo","wow","shikhar"}};

int rows  = sizeof(cars)/sizeof(cars[0]); // 288 / 96  = 3 ;
int columns = sizeof(cars[0])/sizeof(cars[0][0]);  // 96 / 32 = 3 ;

for(int i = 0;i < rows ; i++){
    // std::cout << cars[i] << "\n";  you'll get three memory addresses for the threee rows
    for(int  j = 0; j < columns ; j++ ){
        std::cout << cars[i][j] << " ";
        
    }
    std::cout  << "\n";
}

    return 0;
}