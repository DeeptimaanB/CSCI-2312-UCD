// do while loop to print positive number until user inputs  -1

#include <iostream>

int main() {

    int i = 1;
    int user_in = 0;
    //Loop that prints till 10
    do
    {
        std::cout << i << "\n";
        i++;
        std::cout << "Enter -1 to exit or any other number to continue" << "\n";
        std::cin >> user_in;

    }while(user_in!=-1);

    // Printing a newline at the end
    std::cout << "\n";

    return 0;
}