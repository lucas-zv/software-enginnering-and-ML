#include <iostream>
#include <vector>
#include <string>

int main(){

    std::vector<std::string> Name_database = {};
    std::string name;

    std::cout << "what is your name: " << std::endl;
    std::getline(std::cin, name);

    while(name.length() > 20){
        std::cout << "what is your name: " << std::endl;
        std::getline(std::cin, name);
    }

    Name_database.push_back(name);
    for(int i = 0; i < Name_database.size(); i++){
        std::cout << Name_database[i];
    }

    return 0;
}
