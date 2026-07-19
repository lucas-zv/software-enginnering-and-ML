#include <iostream>

int main(){

    std::string names[] = {"bob", "jane", "john"};
    int squares[5];

    squares[0] = 1;
    squares[1] = 4;
    squares[2] = 9;
    squares[3] = 16;
    squares[4] = 25;


    std::cout << names[1] << "\n";
    std::cout << names[0] << "\n";

    std::cout << squares[3];

    return 0;
}
