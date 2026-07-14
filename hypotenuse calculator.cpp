#include <iostream>
#include <cmath>

int main(){
    using std::cout;
    using std::cin;
  
    cout << "--hypotenuse calculator--" << "\n";

    cout << "what is your first number? " << "\n";
    double a;
    cin >> a;

    cout << "what is your seconmd number? " << "\n";
    double b;
    cin >> b;

    double result = pow(a,2) + pow(b,2);
    double c = sqrt(result);

    cout << "the hypotenuse of the triangle is " << c << "cm";

    return 0;
}
