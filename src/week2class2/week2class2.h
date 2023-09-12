#include <string>

class Date
{
public:
    //
    explicit Date(int aYear, int aMonth, int aDay);

    //setters
    void setDay(int aDay);
    void setMonth(int aMonth);
    void setYear(int aYear);

    void setDate(int aYear, int aMonth, int aDay);

    //getters
    void getDay(int aDay);
    void getMonth(int aMonth);
    void getYear(int aYear);

    std::sting getDate();

private:
    int day;
    int month;
    int year;

};