#include <iostream>
#include <string>


int incrementValue(int value) {
    return value + 1;
}

int incrementReference(const int &value) {
    return value + 1;
}

int incrementPointer(const int *value) {
    return (*value) + 1;
}

struct Student {
    int age;
    std::string name;
};

void printStudentValue(Student student) {
    std::cout << "Student { age =" << student.age << ", name=" << student.name << " }" << std::endl;
}

void printStudentReference(const Student &student) {
    std::cout << "Student { age =" << student.age << ", name=" << student.name << " }" << std::endl;
}

void printStudentPointer(const Student *student) {
//    student->age === *(student).age
    std::cout << "Student { age =" << student->age << ", name=" << student->name << " }" << std::endl;
}

int main() {
    int a = 10;
    int b = incrementValue(a);
    int c = incrementReference(a);
    int d = incrementPointer(&a);

    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << "c=" << c << std::endl;
    std::cout << "d=" << d << std::endl;

    Student s{10, "Peter"};
    printStudentValue(s);
    printStudentReference(s);
    printStudentPointer(&s);
}