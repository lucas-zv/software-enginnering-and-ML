#include <iostream>

void hello(std::string name);

int main(){

    std::string name;
    std::cout << "what is your name " << "\n";
    std::getline(std::cin, name);

    hello(name);

    return 0;
}

void hello(std::string name){
    std::cout << "hello " << name << "!";
}
-------------------------------------------------
  #include <iostream>

void addition(int a, int b);

int main(){
    using std::cin;
    using std::cout;

    int a;
    int b;

    cout << "what is #a ";
    cin >> a;
    cout << "what is #b ";
    cin >> b;

    addition(a, b);

    return 0;
}

void addition(int a, int b){
    int result = a + b;
    std::cout << result << "\n";
    std::cout << "the result is " << result;
}
