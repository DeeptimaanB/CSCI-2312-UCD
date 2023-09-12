#include <string>
#include "Date.h"

    Date::Date(int aYear, int aMonth, int aDay): year(aYear), month(aMonth), year(aYear0);
    //setters
    void Date::setDay(int aDay)
    {
        day=aDay
    }
    void setMonth(int aMonth);
    {
        month=aMonth
    }
    void setYear(int aYear);
    {
        year=aYear;
    }

    void setDate(int aYear, int aMonth, int aDay)
    {

    }

    //getters
    void getDay(int aDay);
    {
        return day;
    }
    void getMonth(int aMonth);
    {
        return month;
    }
    void getYear(int aYear);
    {
        return year;
    }

    std::sting getDate()
    {
        return std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
    }