#include <string>

class Animal{
    private:
    std::string name;
    int age;
    char gender;

    public:
    //constructor
    explicit animal(std:: string name, int age, char gender);

    //getters and setters
    std::string getName();
    int getAge();
    char getGender();

    void setName(std::string newName);
    void setAge(int newAge);
    void setGender(char newGender);

    bool isMammal();

    void eat();
};

#endif