#ifndef MOVIE_H
#define MOVIE_H
#include <string>


//Your Code Here
class Movie
{
private:
    std::string title;
    int releaseYear;
    float duration;

public:
    explicit Movie();
    explicit Movie(std::string title, int year,float duration);

    //getters
    std::string getTitle();
    int getReleaseYear();
    float getDuration();

    //setters
    void setTitle(std::string aTitle);
    void setReleaseYear(int aReleaseYear);
    void setDuration(float aDuration);

    void print();
};


#endif
