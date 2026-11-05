#include <iostream>

struct data{
    std::string name;
    std::string address;
    int age;
    int dob_year;
    bool medicalConditions;

};

void person1_data(data &person1);
void person2_data(data &person2);

int main(){

    data person1;
    person1.name = "jane";
    person1.address = "fake street, 123";
    person1.medicalConditions = false;
    person1.age = 26;
    person1.dob_year = 2000;

    data person2;
    person2.name = "patrick";
    person2.address = "fake street, 456";
    person2.medicalConditions = true;
    person2.age = 29;
    person2.dob_year = 1997;

    person1_data(person1);
    std::cout << std::endl;
    person2_data(person2);

    return 0;
}

void person1_data(data &person1){
    std::cout << person1.name << ", lives at " << person1.address << "\n";
    std::cout << "pre-exsistring medical conditions: " << std::boolalpha << person1.medicalConditions << std::endl;
    std::cout << "age: "<< person1.age << " | birth year: " << person1.dob_year << std::endl;
}

void person2_data(data &person2){
    std::cout << person2.name << ", lives at " << person2.address << "\n";
    std::cout << "pre-exsistring medical conditions: " << std::boolalpha << person2.medicalConditions << std::endl;
    std::cout << "age: "<< person2.age << " | birth year: " << person2.dob_year << std::endl;   
}
