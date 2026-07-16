#include <iostream>
#include <cmath>
#include <string>

int main()
{
    using std::cout;

    int num;
    char option;
    int x;
    int length;
    std::string number;
    cout << "what is the number ";

    while(number.empty()){
        std::getline(std::cin, number);
        if(!number.empty()){
            x = std::stoi(number);
        }
        else if(number.empty()){
            cout << "that is not a valid number!" << "\n";
        }
    }

    cout << "how long should the sequence be?  ";
    std::cin >> length;

    while(true){
        cout << "to what power would you like the sequence to be? s(square), c(cube), or b(biquadrate) or q(quit))" << "\n";
        std::cin >> option;
        if(option == 's'){
            for(int i = 1;  i <= length; i++){
            int finals;
            finals = pow(x, 2);
            cout << finals << ", " << "";
            x += 1;
            }
            break;
        }
        else if(option == 'c'){
            for(int i = 1;  i <= length; i++){
            int finals;
            finals = pow(x, 3);
            cout << finals << ", " << "";
            x += 1;
            }
            break;
        }
        else if(option == 'b'){
            for(int i = 1;  i <= length; i++){
            int finals;
            finals = pow(x, 4);
            cout << finals << ", " << "";
            x += 1;
            }
            break;
        }
        else if(option == 'q'){
            break;
        }
        else{
            cout << "that is not valid!";
        }
    }

    return 0;
}
