#include <iostream>

int main(){
    unsigned int num = 0;

    for(std::cin >> num; num > 0; num--){
        for (int i=num; i > 0; i--){
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
} 