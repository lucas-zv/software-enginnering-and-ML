#include <iostream>

struct data{
    std::string name;
    std::string address;
    int age;
    int dob;
    bool medicalConditions;

};

void something(data person1);

int main(){

    data person1;
    person1.name = "jane";
    person1.address = "fake street, 123";
    something(person1);

    return 0;
}

void something(data person1){
    std::cout << person1.name << ", lives at " << person1.address << "\n";
}
