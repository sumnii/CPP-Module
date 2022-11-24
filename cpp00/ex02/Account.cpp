#include "Account.hpp"

Account::Account( void ) {
	std::cout << "created";
}

Account::Account( int initial_deposit ) {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals
	_totalNbDeposits += initial_deposit;
}

Account::~Account( void ) {
	std::cout << "closed";
}

void	Account::makeDeposit( int deposit ) {
	_nbDeposits = deposit;
	_totalNbDeposits += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_nbWithdrawals = withdrawal;
	_totalNbWithdrawals += withdrawal;
	return true;
}

int		Account::checkAmount( void ) const {
	return _amount;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";created" << std::endl;
}

//[19920104_091532] index:7;amount:16576;created
//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0