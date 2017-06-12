/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 16:20:13 by avella            #+#    #+#             */
/*   Updated: 2017/06/12 16:20:16 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>

int	 Account::_totalAmount = 0;
int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void){
    this->_amount = 0;
    this->_accountIndex = Account::_nbAccounts;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount	<< ";created" << std::endl;
    Account::_nbAccounts++;
}

Account::Account( int initial_deposit ){
    Account::_totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    this->_accountIndex = Account::_nbAccounts;
    this->_nbDeposits = Account::_totalNbDeposits;
    this->_nbWithdrawals = Account::_totalNbWithdrawals;

    Account::_displayTimestamp();

    std::cout << "index:" << this->_accountIndex << ";amount:"<<this->_amount<<";created"<< std::endl;
    Account::_nbAccounts++;

    return;
}

Account::~Account(void){
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
    return;
}

int	Account::getNbAccounts( void ){
    return _nbAccounts;
}
 int	Account::getTotalAmount( void ){
     return _totalAmount;
}
 int	Account::getNbDeposits( void ){
     return _totalNbDeposits;
}
 int	Account::getNbWithdrawals( void ){
     return _totalNbWithdrawals;
}

 void	Account::_displayTimestamp( void )
{
    time_t myTime = time(NULL);
    struct tm * dt;
    char buffer [30];
    dt = localtime(&myTime);
    strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", dt);
    std::cout << buffer;
}
 void	Account::displayAccountsInfos( void ){
     Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts()<< ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;

}

void	Account::makeDeposit( int deposit ){

    int p_amount = this->_amount;

    Account::_totalNbDeposits++;
    Account::_totalAmount += deposit;
    this->_amount += deposit;
    this->_nbDeposits ++;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl ;

}

bool	Account::makeWithdrawal( int withdrawal ){
    int p_amount = this->_amount;

    if(withdrawal > this->_amount){
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl ;

        return false;
    }
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl ;

    return true;
}
int		Account::checkAmount( void ) const{
    return this->_amount;
}

void	Account::displayStatus( void ) const{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" <<this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
