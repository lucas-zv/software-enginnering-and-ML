#include <iostream>

enum days {monday = 0, tuesday = 1, wednesday = 2, thursday = 3, friday = 4, saturday = 5, sunday = 6};

int main(){

    days day = friday;

    switch(day){
        case monday: std::cout << "it is monday.";
                    break;
        case tuesday: std::cout << "it is tuesday.";
                    break;
        case wednesday: std::cout << "it is wednesday.";
                    break;
        case thursday: std::cout << "it is thursday.";
                    break;
        case friday: std::cout << "it is friday.";
                    break;
        case saturday: std::cout << "it is saturday.";
                    break;
        case sunday: std::cout << "it is sunday.";
                    break;
    }

    return 0;
}
