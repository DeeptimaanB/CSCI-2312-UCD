#include <string>
#include <iostream>
#include "Student.h"

int main()
{
    std::string fname;
    std::string lname;
    std::string address;
    int phno;
    int sid;
    char gender;
    bool dorm;

    Student aStudent = Student();
    std::cout << aStudent.getStudent();

    // std::cout << "The First Name is : " +
}