#include <iostream>

class Food{
    public:
        std::string topping1;
        std::string topping2;
        std::string topping3;
        
    Food(std::string topping1){
        this->topping1 = topping1;
    }
    Food(std::string topping2, std::string topping3){
        this->topping2 = topping2;
        this->topping3 = topping3;
    }
};

int main(){

    Food burger("cheese");
    Food pizza("pepperoni", "extra cheese");
    
    std::cout << pizza.topping2 << std::endl;
    std::cout << pizza.topping3;

    return 0;
}
