#include <iostream>

int main(){
    using std::cout;

    std::string name;
    cout << "what is your name? ";
    std::getline(std::cin, name);

    /*
    name.erase(2, 4);
    cout << name;
    ----------------------------------
    cout << name.find(" ");
    ----------------------------------
    name.insert(3, "+");
    cout << name;
    ----------------------------------
    cout << name.at(0);
    ----------------------------------
    name.append("@gmail.com");
    cout << "your gmail is now " << name;
    ----------------------------------
    name.clear();

    cout << "hello " << name;
    ----------------------------------
    if(name.empty()){
        cout << "you didn't enter your name!";
    }

    else{
        cout << "hello " << name;
    }
    ----------------------------------
    if(name.length() > 15){
        cout << "you have a long name";
    }
    else{
        cout << "great name!";
    }
        */


    return 0;
}
