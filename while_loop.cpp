#include <iostream>

int main(){

    std::string name;

    while(name.empty()){
        std::cout << "what is your name? ";
        std::getline(std::cin, name);
    }

    std::cout << "hello " << name;

    return 0;
}
------------------------------------------------------
#include <iostream>

int main(){

    std::string name;

    while(name.length() <= 5 || name.length() >= 15){
        std::cout << "what is your name? ";
        std::getline(std::cin, name);
    }

    std::cout << "hello " << name;

    return 0;
}
