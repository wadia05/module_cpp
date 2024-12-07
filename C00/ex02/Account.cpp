#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit) :
_accountIndex(_nbAccounts),
_amount(initial_deposit),
_nbDeposits(0),
_nbWithdrawals(0)
{
    _accountIndex++;
    _totalAmount += initial_deposit;

}

void Account::_displayTimestamp(void)
{
    std::time_t CurrTime = std::time(0);
    std::tm *localtime = std::localtime(&CurrTime);

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
