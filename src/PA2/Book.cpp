/*********************************************************
* Summary: This file includes the implementation for the Book class (defined
* in Book.h).
*
* Author: Deeptimaan Banerjee
* Created: September 10, 2023

********************************************************/

#include <string>
#include "Book.h"

//constructor
Book::Book(std::string aTitle, int aPubYear, int aNumOfPages){
    title = aTitle;
    pubYear = aPubYear;
    numOfPages = aNumOfPages;
}

//setters
void Book::setTitle(std::string aTitle){
    title = aTitle;
}
void Book::setPubYear(int aPubYear){
    pubYear = aPubYear;
}
void Book::setNumOfPages(int aNumOfPages){
    numOfPages = aNumOfPages;
}

//getters
std::string Book::getTitle(){
    return title;
}
int Book::getPubYear(){
    return pubYear;
}
int Book::getNumOfPages(){
    return numOfPages;
}

//functions
float Book::estimatedBookWeight(){
    // returns the estimated book weight given
    // the weight of one page is 0.176 oz
    return numOfPages * 0.176;
}
