/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:51:08 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/24 12:27:26 by btomlins         ###   ########.fr       */
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

