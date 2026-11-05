#include <iostream>

class grades{
    private:
        double gpa = 5.5; //the object cannot be read outside the class
    public:
        double getGpa(){ //getter: this makes the object read only
            return gpa;
        }
        void setGpa(double &gpa){ //setters: this makes the object writable
            if(gpa < 0){
                this->gpa = 0;
            }
            else if(gpa >= 10){
                this->gpa = 10;
            }
            else{
                this->gpa = gpa;
            }
        }
};

int main(){

    double N;

    grades grade;
    std::cout << grade.getGpa() << "\n";

    std::cout << "new gpa: ";
    std::cin >> N;
    grade.setGpa(N);
    std::cout << "New gpa: " << grade.getGpa();

    return 0;
}
