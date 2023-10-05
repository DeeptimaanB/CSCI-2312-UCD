#include <iostream>
#include <string>

int main(){
    int user_in = 0;

    std::cout << "Enter how many stars do you wanna see : ";
    std::cin >> user_in;

    for (int i=0; i<user_in; i++){
        for (int j=0; j<=i; j++){
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}