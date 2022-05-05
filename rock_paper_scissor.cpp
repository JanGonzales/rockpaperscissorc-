#include <iostream>
#include <time.h>
#include <cstdlib>
#include <stdlib.h>

int main(){
    srand (time(NULL));
    int computer = rand() % 3+ 1;

    int user = 0;

    std::cout << "====================" << std::endl;
    std::cout << "rock paper scissor" << std::endl;
    std::cout << "====================" << std::endl;

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout << "shoot!" << std::endl;
    std::cin >> user;

    if (user == computer){
        std::cout << "It is a draw" << std::endl;
        std::cout << "Computer chose: " << computer <<  " Player chose: " << user << std::endl;
    }
    else if (user == 1 && computer == 3){
        std::cout << "You won,. well done" << std::endl;
        std::cout << "Computer chose: " << computer <<  " Player chose: " << user << std::endl; 
    }

     
    return 0;
}