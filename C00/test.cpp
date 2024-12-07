#include <iostream>
#include <iomanip>
#include <ctime>



void displayTimestamp(void)
{
    std::time_t CurrTime = std::time(0);
    std::tm*  localtime   = std::localtime(&CurrTime);

    std::cout << "["
            << 1900 + localtime->tm_year
            << std::setfill('0')
            << std::setw(2) << 1 + localtime->tm_mon
            << std::setw(2) << localtime->tm_mday
            << "_"
            << std::setw(2) << localtime->tm_hour
            << std::setw(2) << localtime->tm_min
            << std::setw(2) << localtime->tm_sec
            << "]";
}
int main ()
{
    displayTimestamp();
}