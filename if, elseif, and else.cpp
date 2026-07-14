#include <iostream>

int main(){
    using std::cout;

    cout << "how old are you? ";

    int age;
    std::cin >> age;

    if(age > 100){
        cout << "your too old to be driving!";
    }
    else if(age >= 18){
        cout << "you are old enough to drive a car";
    }
    else if(age < 0){
        cout << "you haven't even been born yet";
    }
    else{
        cout << "you're not old enough to drive";
    }
    
    return 0;
}
