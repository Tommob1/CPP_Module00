/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:51:08 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/24 12:35:05 by btomlins         ###   ########.fr       */
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
    std::cout << "Account created. Index: " << _accountIndex << ", Initial Deposit: " << _amount << std::endl;
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
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << "Deposit made. Amount: " << deposit << ", New Balance: " << _amount << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (_amount >= withdrawal)
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        std::cout << "Withdrawal made. Amount: " << withdrawal << ", New Balance: " << _amount << std::endl;
        return true;
    }
    else
    {
        std::cout << "Withdrawal failed. Insufficient funds." << std::endl;
        return false;
    }
}

void Account::displayStatus() const
{

}

void Account::displayAccountsInfos()
{
    
}