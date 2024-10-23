/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:36:35 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/23 14:26:41 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0), oldestIndex(0) {}

void PhoneBook::addContact(const Contact& newContact)
{
    if (contactCount < 8)
    {
        contacts[contactCount] = newContact;
        contactCount++;
    }
    else
    {
        contacts[oldestIndex] = newContact;
        oldestIndex = (oldestIndex + 1) % 8;
    }
}

void PhoneBook::searchContacts() const
{
    int i;
    i = 0;
    
    if (contactCount == 0)
    {
        std::cout << "No contacts saved." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    while (i < contactCount)
    {
        std::cout << std::setw(10) << i + 1 << "|"
                 << std::setw(10) << (contacts[i].getFirst_name().length() > 10 ? contacts[i].getFirst_name().substr(0, 9) + "." : contacts[i].getFirst_name()) << "|"
                 << std::setw(10) << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName()) << "|"
                 << std::setw(10) << (contacts[i].getNick_name().length() > 10 ? contacts[i].getNick_name().substr(0, 9) + "." : contacts[i].getNick_name())
                 << std::endl;
    }
}