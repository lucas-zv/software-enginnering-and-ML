#include <iostream>
#include <limits>

enum option {addition = 1, subtraction = 2, multiplication = 3, division = 4};

class calc{
    public:

    double a_calculator(double &x, double &y){
        return x + y;
    }
    double m_calculator(double &x, double &y){
        return x * y;
    }
    double d_calculator(double &x, double &y){
        return x / y;
    }
    double s_calculator(double &x, double &y){
        return x - y;
    }
};



int main(){

    double x;
    double y;
    
    calc calculator;
    int input;
    std::cout << "what operation do you want to do: (add-1, sub-2, mult-3, div-4) ";
    std::cin >> input;

    option Options = static_cast<option>(input);


    std::cout << "what is the first number: " << std::endl;
    std::cin >> x;

    std::cout << "what is the second number: " << std::endl;
    std::cin >> y;


    switch(Options){
        case addition: std::cout << calculator.a_calculator(x, y);
                        break;
        case subtraction: std::cout << calculator.s_calculator(x, y);
                        break;
        case multiplication: std::cout << calculator.m_calculator(x, y);
                        break;
        case division: std::cout << calculator.d_calculator(x, y);
                        break;
        default:
            std::cout << "try again.";
            break;
    }

    return 0;
}
