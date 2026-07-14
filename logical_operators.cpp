#include <iostream>

int main(){

    bool sunny = true;
    int temp;
    std::cout << "what is the temprature: ";
    std::cin >> temp ;


    if(temp >=15 && temp <= 30){
        std::cout << "it is quite warm" << "\n";
    }
    else if(temp < 15){
        std::cout << "it is cold outside" << "\n";
    
    }

    !sunny ? std::cout << "its cloudy" : std::cout << "its sunny";


    //temp >=15 && temp <=30 ? std::cout << "it is quite warm" : std::cout << "it is cold";

    return 0;

}
