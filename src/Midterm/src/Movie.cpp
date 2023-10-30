#include <iostream>
#include <sstream>
#include <iomanip>
#include "Movie.h"

Movie::Movie(){
    this->title = "ABC";
    this->releaseYear = 2001;
    this->duration = 126.2;
}

Movie::Movie(std::string title, int year,float duration){
    this->title = title;
    this->releaseYear = year;
    this->duration = duration;
}

//getters
std::string Movie::getTitle(){
    return title;
}
int Movie::getReleaseYear(){
    return releaseYear;
}
float Movie::getDuration(){
    return duration;
}

//setters
void Movie::setTitle(std::string aTitle){
    title=aTitle;
}

void Movie::setReleaseYear(int aReleaseYear){
    releaseYear = aReleaseYear;
}

void Movie::setDuration(float aDuration){
    duration = aDuration;
}

void Movie::print(){
    // std::cout << std::fixed << std::showpoint;
    // std::cout.precision(2);
    std::cout << "|" << std::setfill(' ') << std::setw(30) << getTitle() << "|" << std::setw(5) << getReleaseYear() << "|" << std::setw(7) << getDuration() << "h |" << std::setw(7) << static_cast<int>(getDuration()*60) << "min |" << std::endl;
}