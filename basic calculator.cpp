#include <iostream>
#include <cmath>

int main(){
    using std::cin;
    using std::cout;

    char op;
    double a;
    double b;
    double result;

    cout << "what is the operation? +, -, /, x, s, p: ";
    cin >> op;
    
    cout << "number1: ";
    cin >> a;

    if(op == '+' || op == '-' || op == '/' || op == 'x'){
        cout << "number2: ";
        cin >> b;

        switch(op){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case 'x':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        }   
    cout << "result: " << result << "\n";
    }

    else if(op == 's' || op == 'p'){
        switch(op){
            case 's':
            result = sqrt(a);
            break;
        case 'p':
            result = pow(a,2);
            break;
          }
        cout << "result: " << result << "\n";
        }

    else{
        cout << "that is an invalid operation!";
    }

     return 0;

    }
