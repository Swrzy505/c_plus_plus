#include<iostream>

int main(){
    std::string questions[] = {"1. what year c++ was Invented ?",
                               "2. Who made c++ ? ",
                               "3. Who is the predecessor of c++ ?",
                               "4. Is Earth flat ?"};
    std::string options[][4] = {{"A.1888","B.1988","C.1985","D.1882"},
                               {"A.shikhar","B.Bjarne st","C.Farhan","D.God"},
                               {"A.C","B.c--","C.c#","D.c9"},
                               {"A.yes","B.no","C.maybe","D.wow"}};
    double size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    char answerkey[] = {'C','B','A','B'};

    for(int i = 0;i < size;i++){
        std::cout << "************************************" << '\n';
        std::cout << questions[i] << '\n';
        std::cout << "************************************" << '\n';
        for(int j = 0 ; j < sizeof(options[i])/sizeof(options[i][0]) ; j++){
            std::cout << options[i][j] << '\n' ;

        }
        std::cin >> guess ;
        guess = toupper(guess);

        if(guess == answerkey[i]){
            std::cout << "CORRECT!" << '\n';
            score++;
        }
        else{
            std::cout << "WRONG!" << '\n';
            std::cout << "correct answer :" << answerkey[i] << '\n';
        }

       }
        std::cout << "RESULTS :-\n";
        std::cout << "correct guesses : " << score << '\n';
        std::cout << "questions :" << size << '\n';
        std::cout << "score : " << (score/size)*100 <<"%" << '\n'; 

    

    return 0;
}