#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

void     Account::_displayTimestamp( void ){
    time_t tmp = time(NULL);
    std::tm *now = localtime(&tmp);
    std::cout << std::setfill('0') << "[" << now->tm_year + 1900
        << std::setw(2) << now->tm_mon + 1
        << std::setw(2) << now->tm_mday << '_'
        << std::setw(2) << now->tm_hour
        << std::setw(2) << now->tm_min
        << std::setw(2) << now->tm_sec << "]";
}

Account::Account(int initialDeposit) : _amount(initialDeposit){
    
    _nbAccounts++;
    this->_totalAmount += this->_amount;
    this->_accountIndex = _nbAccounts - 1;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_displayTimestamp();
    std::cout << " index:" <<this->_accountIndex
        <<";amount:"<<this->_amount
        <<";created" << std::endl;
    return;
}

Account::~Account( void ){
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
        << ";amount:" << this->_amount
        << ";closed"<< std::endl;
}

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts
        << ";total:"<< _totalAmount
        << ";deposits:" << _totalNbDeposits
        <<";withdrawals:" << _totalNbWithdrawals << std::endl;
}
void	Account::displayStatus( void ) const{
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
        << ";amount:" << this->_amount 
        << ";deposits:" << this->_nbDeposits
        << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ){
    this->_amount+=deposit;
    this->_nbDeposits++;
    this->_totalNbDeposits++;
    this->_totalAmount+= deposit;
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
        << ";p_amount:" << this->_amount - deposit
        << ";deposit:" << deposit
        << ";amount:" << this->_amount
        << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
    if (withdrawal > this->_amount){
        this->_displayTimestamp();
        std::cout << " index:" << this->_accountIndex
            << ";p_amount:" << this->_amount
            << ";withdrawal:refused" << std::endl;
        return false;
    }
    else {
        this->_amount-=withdrawal;
        this->_nbWithdrawals++;
        this->_totalNbWithdrawals++;
        this->_totalAmount -= withdrawal;
        this->_displayTimestamp();
        std::cout << " index:" << this->_accountIndex
            << ";p_amount:" << this->_amount + withdrawal
            << ";withdrawal:" << withdrawal
            << ";amount:" << this->_amount
            << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return true;
    }
}