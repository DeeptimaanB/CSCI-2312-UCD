#include <string>

class Student{
    private:
    std::string fname;
    std::string lname;
    std::string address;
    int phno;
    int sid;
    char gender;
    bool dorm;

    public:
    //constructor
    explicit Student();
    explicit Student(std:: string fname, std:: string lname, std::string address, int phno, char gender, bool dorm, int sid);

    //setters
    void setFname(std::string newFname);
    void setLname(std::string newLname);
    void setAddress(std::string newAddress);
    void setGender(char newGender);
    void setDorm(bool newDorm);
    void setPhno(int newPhno);
    void setSid(int newSid);
    void setStudent(std:: string aFname, std:: string aLname, std::string aAddress, int aPhno, char aGender, bool aDorm, int aSid)

    //getters
    std::string getFname();
    std::string getLname();
    std::string getAddress();
    char getGender();
    bool getDorm();
    int getPhno();
    int getSid();
    std::string getStudent();



};