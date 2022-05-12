#include <iostream>
#include <time.h>
#include <cstdlib>
#include <stdlib.h>

int main(){
    srand (time(NULL));
    int computer = rand() % 5+ 1;

    int user = 0;

    std::cout << "====================" << std::endl;
    std::cout << "rock paper scissor" << std::endl;
    std::cout << "====================" << std::endl;

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️😊\n";
    std::cout << "4) 🦎Lizards" << std::endl;
    std::cout << "5) ✌️Spock" << std::endl;

    std::cout << "shoot!" << std::endl;
    std::cin >> user;

    if (user == computer){
        std::cout << "It is a draw" << std::endl;
        std::cout << "Computer chose: " << computer <<  " Player chose: " << user << std::endl;
    }
    else if (user == 1 && computer == 3 or computer == 4){
        std::cout << "You won,. well done " << user << std::endl;
        std::cout << "Computer chose: " << computer <<  " Player chose: " << user << std::endl; 
    }
    else if(user == 2 && computer == 1 or computer == 5 ){
        std::cout << "You won,. well done " << user << std::endl;
        std::cout << "Computer chose: " << computer <<  " Player chose: " << user << std::endl; 
    }
    else if (user == 3 && computer == 2 or computer == 5){
        std::cout << "You won,. well done " << user << std::endl;
        std::cout << "Computer chose: " << computer <<  " Player chose: " << user << std::endl; 
    }
    else if(user == 4 && computer == 2 or computer == 5 ){
        std::cout << "You won,. well done " << user << std::endl;
        std::cout << "Computer chose: " << computer <<  " Player chose: " << user << std::endl; 
    }
    else if(user == 5 && computer == 1 or computer == 3 ){
        std::cout << "You won,. well done " << user << std::endl;
        std::cout << "Computer chose: " << computer <<  " Player chose: " << user << std::endl; 
    }
    else{
        std::cout << "You lost, you chose: " << user <<std::endl;
        std::cout << "The computer chose: " << computer << std::endl;\
    }

     
    return 0;
}