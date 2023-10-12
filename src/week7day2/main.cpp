#include <iostream>
#include <ctime>
#include <cstdlib>
#include <array>

int rand_50_100();

int main(){
    srand((time(NULL)));
    const unsigned int ROWS = 5;
    const unsigned int COLS = 7;
    std::array<std::array<int, ROWS>, COLS> arr;
    

    for (int row=0; row < arr.size(); row++){
        for(int column=0; column <arr[row].size(); column++){
            arr[row][column] = rand_50_100();
        }
    }
    
    for (int row=0; row < arr.size(); ++row){
        for(int column=0; column <arr[row].size(); ++column){
            std::cout << arr[row][column] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

int rand_50_100(){
    int lb = 49, ub = 100; 
    return((rand() % (ub - lb + 1)) + lb );
}