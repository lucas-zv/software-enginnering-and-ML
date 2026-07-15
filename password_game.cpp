#include <iostream>

namespace second{
    std::string guess;
}

int main(){
   
    int guess = 0;
    std::string pass = "abc";

    do{
        std::cout << "what is your first guess? ";
        std::cin >> second::guess;
        if(guess == 2){
            std::cout << "too many attempts" << "\n";
            break;
        }
        else if(second::guess != pass){
            std::cout << "that was wrong" << "\n";
            guess += 1;
        }
        else{
            std::cout << "that was correct!" << "\n";
        }

    }while(second::guess != pass);

    return 0;
}
