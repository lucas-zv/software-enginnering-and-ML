#include <iostream>

namespace first{ //allows for same variables to be declared without confilcts
    const int x = 10; // doesn't allow for the value to be changed later as its now a constant
}

int main(){

    using std::cout;

    int x = 10; //int is for integer
    double y =  2.56; //double is for decimals
    std::string z = "hello"; //i was suprised since i thought there would be a str declerator but instead its defined by the std namepsace
    bool w = true; //bool is for boolean. sightly more suprised how instead of showing true or false it displayes 0 and 1 which makes sense but is till a bit diffrent, just because of design philosphies and speed i guess

    cout << x << '\n';
    cout << y << '\n';
    cout << z << '\n';
    cout << first::x << '\n';
    cout << "the statement is " << w; // i forgot that it does not say true but 1 or 0 so the statment doesn't actually make sense

    return 0;
}
