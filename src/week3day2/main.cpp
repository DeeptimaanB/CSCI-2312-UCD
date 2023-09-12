#include <iostream>
#include <iomanip>

int main (){
    //initialize variables
    int total{0};
    unsigned int gradeCounter{0};
    int grade{0};

    total = 0;
    gradeCounter = 0;
    grade = 0;

    //prompt user to read grade from user
    std::cout << "Enter first grade to start";
    std::cin >> grade;

    while (grade>-1){
        total=grade+total;
        ++gradeCounter;
        std::cout << "Enter the next Grade or -1 quit";
        std::cin >> grade;
    }

    if (gradeCounter==0){
        std::cout << "You didnt enter any grade";
    }

    std::cout << "Your class average is" + std::to_string(total/gradeCounter);

}