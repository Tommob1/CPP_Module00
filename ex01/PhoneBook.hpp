/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:22:50 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/23 13:54:02 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int contactCount;
        int oldestIndex;

    public:
        PhoneBook();
        void addContact(const Contact& newContact);
        void searchContacts() const;
};

#endif
