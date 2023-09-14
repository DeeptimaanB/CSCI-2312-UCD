// do while loop to print 1-10

#include <iostream>

int main() {

    int i = 1;
    //Loop that prints till 10
    do
    {
        std::cout << i << " ";
        i++;
    }while(i<=10);

    // Printing a newline at the end
    std::cout << "\n";

    return 0;
}