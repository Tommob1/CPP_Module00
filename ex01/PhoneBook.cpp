/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:36:35 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/24 12:15:05 by btomlins         ###   ########.fr       */
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
        i++;
    }

    int index;
    std::cout << "Enter an index to view full contact details: ";
    std::cin >> index;

    if (index >= 1 && index <= contactCount)
    {
        contacts[index - 1].displayContact();
    }
    else
    {
        std::cout << "Invalid index." << std::endl;
    }
}

int PhoneBook::searchOldestContact() const
{
    int i;
    int oldest;
    
    i = 1;
    oldest = 0;
    
    while (i < contactCount)
    {
        if (contacts[i].getCreated() < contacts[oldest].getCreated())
        {
            oldest = i;
        }
        i++;
    }
    return oldest;
}