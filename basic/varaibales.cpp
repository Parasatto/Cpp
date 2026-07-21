#include <iostream>

int main(){
    int age = 25;
    double salary = 400000.0;
    char grade = 'A';
    bool isCoding = true;

    std::string name = "Parasat";
    unsigned int positiveOnly = 200;

    std::cout << age << ", "
                << salary << ", "
                << grade << ", "
                << isCoding << ", "
                << name << ", "
                << positiveOnly << std::endl;
    return 0;
}