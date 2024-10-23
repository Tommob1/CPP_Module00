/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:22:50 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/23 15:02:14 by btomlins         ###   ########.fr       */
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
        void addContact(const Contact &newContact); 
        void searchContacts() const;
        int searchOldestContact() const;
};

#endif
