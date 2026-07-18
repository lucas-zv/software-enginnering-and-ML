#include <iostream> 

//overlaoded function are the same functions but with diffrent arguments in each one such as:

void burger();
void burger(std::string topping1);
void burger(std::string topping1, std::string topping2);

int main(){

    std::string topping1 = "cheese";
    std::string topping2 = "lettuce";

    burger();
    burger(topping1);
    burger(topping1, topping2);

    return 0;
}

void burger(){
    std::cout << "you have a burger" << "\n";
}

void burger(std::string topping1){
    std::cout << "you have a burger with " << topping1 << "\n";
}

void burger(std::string topping1, std::string topping2){
    std::cout << "you have a burger with " << topping1 << " and " << topping2;
}
