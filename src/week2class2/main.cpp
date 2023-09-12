#include <string>
#include <iostream>
#include "Date.h"

int main()
{
    Date aDate = Date(2023, 08, 31);
    std::cout << "The month is " << aDate.getMonth() << std::endl;
    std::cout << "The day is " << aDate.getDay() << std::endl;
    std::cout << "The year is " << aDate.getYear() << std::endl;
    std::cout << "The Date is : " << aDAte.getDate() << std::endl;
    return 0;
}