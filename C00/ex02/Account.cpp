#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int  Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int  Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int  Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int  Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ":";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << ";";
    std::cout << std::endl;
    return ;
}

void	Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    this->_nbDeposits++;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << ";";
    std::cout << std::endl;
    _totalNbDeposits++;
    _totalAmount += deposit;
    return ;
}

void	Account::_displayTimestamp(void)
{
    time_t  now;
    tm	    *local_time;

    now = std::time(0);
    local_time = std::localtime(&now);
    std::cout << "[" << 1900 + local_time->tm_year;
    if (local_time->tm_mon < 10)
	std::cout << "0";
    std::cout << local_time->tm_mon + 1;
    if (local_time->tm_mday < 10)
	std::cout << "0";
    std::cout << local_time->tm_mday << "_";
    if (local_time->tm_hour < 10)
	std::cout << "0";
    std::cout << local_time->tm_hour;
    if (local_time->tm_min < 10)
	std::cout << "0";
    std::cout << local_time->tm_min;
    if (local_time->tm_sec < 10)
	std::cout << "0";
    std::cout << local_time->tm_sec << "] ";
}

int	Account::checkAmount(void) const
{
    return (this->_amount);
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";"; 
    if (withdrawal <= this->_amount)
    {
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals<< ";" << std::endl;
	return (true);
    }
    else
	std::cout << "withdrawal:refused";
    std::cout << std::endl;
    return (false);
}

void	Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this-> _nbWithdrawals << ";";
    std::cout << std::endl;
}

Account::Account(int initial_deposit) :  _amount(initial_deposit)
{
    this->_accountIndex = _nbAccounts;
    _totalAmount += _amount;
    _nbAccounts++;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    _nbAccounts--;
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}
