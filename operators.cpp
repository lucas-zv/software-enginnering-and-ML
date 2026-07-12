#include <iostream>

int students =  20;

namespace remainders{
    int remainder = students % 3;
}

int main(){
    using std::cout;

    //students += 2;
    //students ++;

    //students -= 5;
    //students --;

    //students *= 2;
    //students *= 1.5;

    //students /= 2;
    //students/=3;

    int remainder = students % 2;
    cout << remainder << "\n";
    cout << remainders::remainder;
    
    return 0;
}
