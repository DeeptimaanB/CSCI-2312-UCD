#include <iostream>

int main(){
    //declaring variables
    //var1 is the first variable
    int var1{0};
    //var2 is the first variable
    int var2{0};

    //Enter Input
    std::cout << "Please enter first integer :\n";
    std::cin >> var1;

    std::cout << "Please enter second integer :\n";
    std::cin >> var2;

    //Summation
    std::cout << "The sum is :" << var1+var2 << std::endl;
    std::cout << var1 << " + " << var2 << " = " << var1+var2 << std::endl;


    //Greater than or equal to
    if (var1>var2){
        std::cout << "var1 is greater than var2";
        std::cout << var1 << " is greater than " << var2;
    }
    else if (var2>var1){
        std::cout << "var2 is greater than var1" << std::endl;
        std::cout << var2 << " is greater than " << var1 << std::endl;
    }
    else{
        std::cout << "var1 is equal to var2" << std::endl;
        std::cout << var1 << " is equal to " << var2 << std::endl;
    }

    return 0;
}