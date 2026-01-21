#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts()		{	return (Account::_nbAccounts);	}

int Account::getTotalAmount()		{	return (Account::_totalAmount);	}

int	Account::getNbDeposits()		{	return (Account::_totalNbDeposits);	}

int Account::getNbWithdrawals()		{	return (Account::_totalNbWithdrawals);	}

int	Account::checkAmount() const	{	return (_amount);	}

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";created\n";
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";closed\n";
	Account::_nbAccounts--;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << ";\n";
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" <<_accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << ";\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" <<_accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	int success = _amount - withdrawal;
	if (success >= 0)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << ";\n";
		return (true);
	}
	std::cout << "withdrawal:refused;\n";
	return (false);
}

void	Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" <<_accountIndex << ";";
	std::cout << "amount:" <<_amount << ";";
	std::cout << "deposits:" <<_nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << ";\n";
}

void	Account::_displayTimestamp()
{
	std::cout << "[20251028_091532] ";
}
