/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:59:59 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/24 12:15:13 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD")
        {
            std::string first_name, last_name, nickname, phone_number, darkest_secret;

            std::cout << "First name: ";
            std::cin >> first_name;
            std::cout << "Last name: ";
            std::cin >>last_name;
            std::cout << "Nickname: ";
            std::cin >> nickname;
            std::cout << "Phone number: ";
            std::cin >> phone_number;
            std::cout << "Darkest secret: ";
            std::cin >> darkest_secret;

            Contact newContact(first_name, last_name, nickname, phone_number, darkest_secret);
            phonebook.addContact(newContact);
        }
        else if (command == "SEARCH")
        {
            phonebook.searchContacts();
        }
        else if (command == "EXIT")
        {
            std::cout << "Exiting the program" << std::endl;
            break;
        }
        else
        {
            std::cout << "Unknown command (enter ADD, SEARCH or EXIT)" << std::endl;
        }
    }
    return (0);
}