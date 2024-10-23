/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:22:50 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/23 14:58:14 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
    private:
        Contact contacts[8];
        int contactCount;
        int oldestIndex;

    public:
        PhoneBook();
        void addContact(std::string first_name, std::string last_name, std::string nick_name,
                    std::string phone_number, std::string darkest_secret);
        void searchContacts() const;
        int searchOldestContact() const;
};

#endif
