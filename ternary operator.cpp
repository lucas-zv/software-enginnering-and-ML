#include <iostream>

int main(){

   int x = 9;
   x % 2 ? std::cout << "odd" << "\n" : std::cout << "even" << "\n";

   bool running = false;
   //running ? std::cout << "you are running" : std::cout << "you are walking";
   std::cout << (running ? "you are running" : "you are walking");

    return 0;
}
