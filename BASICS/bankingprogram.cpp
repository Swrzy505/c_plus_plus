#include<iostream>
#include<iomanip> 

double deposit(){
    double amount = 0;
    std::cout << "Enter the amopunt to be entered:";
    std::cin >> amount;
    if(amount < 0){
     std::cout << "Invalid Amount!!\n";
     return 0;
    }else{
        return amount;
    }

    
    return amount;
};
double withdraw(double balance){
    double amount = 0;
    std::cout << "Enter the amount to be withdrawn:";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Not enough Balance!\n";
        return 0;
    }

    return amount;
};
void showbalance(double balance){
    std::cout << "your balance $"<<balance<< '\n';
};


int main(){

    int choice = 0;
    double balance = 0;

    do{
            std::cout << "-------------------------------------\n";
    std::cout << " 1.deposit\n";
    std::cout << " 2.withdraw\n";
    std::cout << " 3.show balance\n";
    std::cout << " 4.exit\n";
    std::cout << "-------------------------------------\n";
    std::cout << "enter your choice: ";
    std::cin >> choice;

    std::cin.clear();
    fflush(stdin);
    
    switch(choice){
        case 1:
        balance += deposit();
        showbalance(balance);
        break;
        case 2:
        balance -= withdraw(balance);
        showbalance(balance);
        break;
        case 3:
        showbalance(balance);
        break;

        case 4:
        std::cout << "Thanks for visiting!\n";
        break;
        default:
        std::cout << "Invalid";
        break;
    }

    }while(choice != 4);

    return 0;
}