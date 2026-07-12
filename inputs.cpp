#include <iostream>

using str_t = std::string;

int main(){
    using std::cout;
    using std::cin;

    str_t age;
    cout << "how old are you?  ";
    cin >> age; // character input 

    cout << "you are " << age << " years old";

    str_t name;
    cout << "what is your name? ";
    std::getline(cin >> std::ws , name); //this checks an input stream and puts them into the string. std::ws checks for whitespaces in the first input and deletes it

    cout << "your name is " << name << "\n";

    return 0;
}
