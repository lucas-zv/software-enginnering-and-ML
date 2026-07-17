#include <iostream>
#include <ctime>

int main(){

    int attempts = 0;
    int num;
    int guess;
    std::string suffix;

    srand(time(NULL));

    num = (rand() % 100) + 1;

    while(guess != num){
        std::cout << "what is your guess ";
        std::cin >> guess;
        if(guess == num){
            std::cout << "that is correct!" << "\n";
        }
        else{
            attempts += 1;
            if(attempts == 1){
                suffix  = "st";
            }
            else if(attempts == 2){
                suffix = "nd";
            }
            else if(attempts == 3){
                suffix = "rd";
            }
            else{
                suffix = "th";
            }
            
            std::cout << "that was inccorect" << "\n";

            if(guess > num){
                std::cout << "you went over" << "\n";
            }
            else if(guess < num){
                std::cout << "you went under" << "\n";
            }
            std::cout << "you are at your " << attempts << suffix << " guess" << "\n";
            }
    }

    return 0;
}
