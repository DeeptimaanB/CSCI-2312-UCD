/*********************************************************
* Summary: This file contains code that gives output
*          for the assignment PA2
*
* Author: Deeptimaan Banerjee
* Created: September 10, 2023

********************************************************/

/*
 * // TODO 1: Read this explanation of why we are using a helper function on top of the main function.
* We are going to be putting all the code that would normally go inside main() into this function. This is so the
 * tests can easily simulate console inputs and outputs and interact with cin and cout. If you are confused, please
 * reach out.
*/
// Done

// TODO 2: Include all needed libraries and header files
// Done

#include <iostream>
#include "mainRunner.h"
#include "Book.h"


int mainRunner() {
    std::string title;
    int year;
    int pages;

    // TODO 3: Ask the user to input each field needed to construct the `Book` class
    // use the prompt: "Please input the title of the book: " to get the title from the user
    // use the prompt: "Input the publication year of the book: " to get the publication year from the user
    // use the prompt: "Input the number of pages in the book: " to get the number of pages from the user
    // Done
    std::cout << "Please input the title of the book: "<< std::endl;
    getline(std::cin, title);

    std::cout << "Input the publication year of the book: " << std::endl;
    std::cin >> year;

    std::cout << "Input the number of pages in the book: " << std::endl;
    std::cin >> pages;

    // TODO 4: Using the user's inputs, create a `Book` object
    // Done
    Book aBook = Book(title, year, pages);

    // TODO 5: Output the Book's title and estimated weight
    // use the format "<Book Title> is about <Estimated Book Weight> ounces."
    // Remember to end with a new line character
    // Done
    std::cout << aBook.getTitle() << " is about " << std::to_string(aBook.estimatedBookWeight()) << " ounces." << std::endl;


    return 0;
}