#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "this animal is eating\n";
    }
};

class Dog : public Animal{
    public:

    void Speak(){
        std::cout << "the dog says hello\n";
    }
};

class Cat : public Animal{
    public:

    void drinking(){
        std::cout << "the cat is drinking!\n";
    }
};

int main(){

    Dog dog;
    dog.eat();
    
    Cat cat;
    cat.drinking();
    cat.eat();

    return 0;
}
