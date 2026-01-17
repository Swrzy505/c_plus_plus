#include<iostream>
#include <ctime>

char getuserchoice(){
    char player;

    std::cout << "ROCK PAPER SCISSORS\n";

    do{
    std::cout << "*********************************\n";
    std::cout << "r : for rock\n";
    std::cout << "p : for paper\n";
    std::cout << "s : for scissors\n";
    std::cout << "*********************************\n";
    std::cin >> player;

    }

    while(player!='r'&& player!='p'&& player!='s'); 
  return player;
};
char computerschoice(){
    srand(time(0));

    int num = rand()%3 + 1;
    switch(num){
        case 1:return 'r';
        case 2:return 'p';
        case 3:return 's';
    }

    
  return 0;
};
void showchoice(char choice){

    switch(choice){
        case 'r':
        std::cout << "Rock";
        break;
        case 'p':
        std::cout << "paper";
        break;
        case 's':
        std::cout << "scissor";
        break;
        
    }


};
void winner(char player,char computer){
    switch(player){
        case 'r':
        if(computer == 'r'){
            std::cout << "\nIT'S A TIE!!";
        }
        else if(computer == 's'){
            std::cout << "\nYOU WON!!";
        }
        else{
            std::cout << "\nYOU LOSE!!";
        }
        break;
         case 'p':
        if(computer == 'p'){
            std::cout << "\nIT'S A TIE!!";
        }
        else if(computer == 'r'){
            std::cout << "\nYOU WON!!";
        }
        else{
            std::cout << "\nYOU LOSE!!";
        }
        break;
        case 's':
        if(computer == 's'){
            std::cout << "\nIT'S A TIE!!";
        }
        else if(computer == 'p'){
            std::cout << "\nYOU WON!!";
        }
        else{
            std::cout << "\nYOU LOSE!!";
        }
        break;

    }
    
}


int main(){
    char player;
    char computer;
    
    player = getuserchoice();
    std::cout << "Your Choice : ";
    showchoice(player);

    computer = computerschoice();
    std::cout << "\nComputer's Choice : ";
    showchoice(computer);

    winner(player,computer);



    return 0;
}