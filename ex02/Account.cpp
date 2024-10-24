/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:51:08 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/24 14:03:32 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) :_accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
    std::cout << "Account closed. Index: " << _accountIndex << std::endl;
}

int Account::getNbAccounts()
{
    return _nbAccounts; 
}
int Account::getTotalAmount()
{
    return _totalAmount; 
}
int Account::getNbDeposits()
{
    return _totalNbDeposits; 
}
int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals; 
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";deposit:" << deposit
              << ";amount:" << (_amount + deposit)
              << ";nb_deposits:" << (_nbDeposits + 1)
              << std::endl;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if (_amount >= withdrawal)
    {
        std::cout << "index:" << _accountIndex
                  << ";p_amount:" << _amount
                  << ";withdrawal:" << withdrawal
                  << ";amount:" << (_amount - withdrawal)
                  << ";nb_withdrawals:" << (_nbWithdrawals + 1)
                  << std::endl;
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        return true;
    }
    else
    {
        std::cout << "index:" << _accountIndex
                  << ";p_amount:" << _amount
                  << ";withdrawal:refused"
                  << std::endl;
        return false;
    }
}

void Account::_displayTimestamp(void)
{
    char buffer[20];
    std::time_t now = std::time(0);
    std::tm *localTime = std::localtime(&now);
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localTime);
    std::cout << "[" << buffer << "] ";
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;}
