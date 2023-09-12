#include <string>

class Book
{
private:
    std::string title;
    int pubYear;
    int numOfPages;

public:
    //constructor
    explicit Book(std::string aTitle, int aPubYear, int aNumOfPages);

    //setters
    void setTitle(std::string aTitle);
    void setPubYear(int aPubYear);
    void setNumOfPages(int aNumOfPages);

    //getters
    std::string getTitle();
    int getPubYear();
    int getNumOfPages();

    //functions
    float estimatedBookWeight();

};