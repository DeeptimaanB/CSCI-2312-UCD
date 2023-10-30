// Exercise 2 Main function Here.
#include <iostream>
#include <sstream>
#include <iomanip>
#include "Movie.h"
#include <vector>


int main()
{
    std::vector<Movie> movies;
    int input = 0;
    std::cout << std::fixed << std::showpoint;
    std::cout.precision(2);
    while(input!=99){
        std::cout << std::setfill('=') << std::setw(18) << "=" << std::endl;
        std::cout << "1) Add Movie" << std::endl;
        std::cout << "2) Print Movies" << std::endl;
        std::cout << "99) Exit" << std::endl;
        std::cout << std::setfill('-') << std::setw(18) << "-" << std::endl;
        std::cout << "Enter Option: ";
        std::cin >> input;

        if(input == 1){
            std::cout << "Enter Movie Name" << std::endl;
            std::string mname;
            std::cin >> mname;
            std::cout << "Enter Movie ReleaseYear" << std::endl;
            int mReleaseYear;
            std::cin >> mReleaseYear;
            std::cout << "Enter Movie Duration (h)" << std::endl;
            float mDuration;
            std::cin >> mDuration;
            movies.push_back(Movie(mname, mReleaseYear, mDuration));
        }
        if(input == 2){
            std::cout << "|" << std::setfill(' ') << std::setw(30) << "MOVIE " << "|" << std::setw(5) << "YEAR |" << std::setw(7) << "Dur (H) |" << std::setw(7) << "Dur (M). |" << std::endl;
            for (auto m : movies){
                m.print();
            }
        }
    }
    return 0;

}
