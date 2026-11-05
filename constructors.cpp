class student{
    public:
        std::string name;
        int age;
        double gpa;
    student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

void Print(student &student);

int main(){

    student student1("bob", 21, 8.9);
    student student2("garry", 30, 6.2);

    Print(student1);
    Print(student2);

    return 0;
}

void Print(student &student){
    std::cout << student.name << std::endl;
    std::cout << student.age << std::endl;
    std::cout << student.gpa << std::endl;
    std::cout << std::endl;
}
