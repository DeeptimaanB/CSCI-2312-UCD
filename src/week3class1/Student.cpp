#include <string>
#include "Student.h"

Student::Student()
{
    fname="John",
    lname="Doe",
    address="USA",
    gender="m";
    dorm=true;
    phno="1234567890";
    sid="1234567";
}
Student::Student(std:: string fname, std:: string lname, std::string address, int phno, char gender, bool dorm, int sid)
{
    fname=fname,
    lname=lname,
    address=address,
    gender=gender;
    dorm=dorm;
    phno=phno;
    sid=sid;
}

//setters
void Student::setFname(std::string newFame);
{
    fname=newFame,
}
void Student::setLname(std::string newLname);
{
    lname=newLname,
}
void Student::setAddress(std::string newAddress);
{
    address=newAddress,
}
void Student::setGender(char newGender);\
{
    gender=newGender;
}
void Student::setDorm(bool newDorm);
{
    dorm=newDorm;
}
void setPhno(int newPhno);
{
    phno=newPhno
}
void Student::setSid(int newSid);
{
    sid=newSid;
}
// void Student::setStudent(std:: string aFname, std:: string aLname, std::string aAddress, int aPhno, char aGender, bool aDorm, int aSid)
// {
//     fname=aFname;
//     lname=aLname;
//     address=aAddress;
//     gender=aGender;
//     dorm=aDorm;
//     phno=aPhno;
//     sid=aSid;
// }

//getters
std::string getFname();
{
    return fname;
}
std::string getLname();
{
    return lname;
}
std::string getAddress();
{
    return address;
}
char getGender();
{
    return gender;
}
bool getDorm();
{
    return dorm;
}
int getPhno();
{
    return phno;
}
int getSid();
{
    return sid;
}
std::string getStudent();
{
    return student;
}

std::string Student::getStudent()
{
    return "Name" + fname + " " + lname + " /nStudentId = " + std::to_string(sid) + " /nAddress = " + address + " /nPhone = " + std::to_string(phno) + " /nDorm = " + std::to_string(dorm) + " /nGender = " + std::to_string(gender);
}