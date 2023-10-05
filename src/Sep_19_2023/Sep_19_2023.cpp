#include <iostream>
#include <ctime>
#include <cstdlib>

// Defining Function Prototypes
int rand_0_3();
void theFine(int fine);

// The main function
int main(){
    int random = rand_0_3();
    theFine(random);
    return 0;

}

//Defining the functions
int rand_0_3(){
    srand((time(0)));
    return(0 + (rand() % 4));
}

void theFine(int fine){
    std::cout << "Your fine/punishment is : ";
    switch(fine) {
    case 0:
        std::cout << "Loss of driving priveleges. \n";
    break;
    case 1:
        std::cout << "Night in Jail. \n";
    break;
    case 2:
        std::cout << "Week in jail. \n";
    break;
    case 3:
        std::cout << "Week of sorting recycling. \n";
    break;
    }
}