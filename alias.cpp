#include <iostream>

using str_t = std::string; //using is better for templates while typedef you can use but is older and has less aplications
using num_t = int;
using Dec_t = double;

int main(){
    using std::cout; //to stop the repetition of having to call the standard namespace

    str_t name = "bob";
    num_t x = 10;
    Dec_t y = 2.5;

    cout << x << "\n"; // \n for a new line. you can also use << std::cout "\n" but thats longer and why use that when you want to cut of some time!
    cout << y << "\n";
    cout << name;

    return 0;
}
