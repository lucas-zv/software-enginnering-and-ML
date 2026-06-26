class Student():

    count = 0
    Total_Gpa = 0

    def __init__(self, name, gpa):
        self.name = name
        self.gpa = gpa
        Student.count += 1
        Student.Total_Gpa += gpa

    def get_info(self):
        return f'{self.name} has a gpa of {self.gpa}'

    @classmethod
    def get_count(cls):
        return f"number of students {cls.count}"

    @classmethod
    def total_gpa(cls):
        return f"the total gpa is {cls.Total_Gpa}"

student1 = Student("sponge", 4.0)
student2 = Student("bob", 2.0)
student3 = Student("spatrick", .01)

print(Student.get_count())
print(Student.total_gpa())
