/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:59:55 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/24 12:15:21 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : created(std::time(0)) {
    
}

Contact::~Contact() {

}

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name,
                 std::string phone_number, std::string darkest_secret)
    : fname(first_name), lname(last_name), nick(nick_name),
      phnumber(phone_number), secret(darkest_secret), created(std::time(0))
{

}

std::string Contact::getLastName() const { return lname; }
std::string Contact::getFirst_name() const { return fname; }
std::string Contact::getNick_name() const { return nick; }
std::string Contact::getPhone_number() const { return phnumber; }
std::string Contact::getDarkest_secret() const { return secret; }
time_t Contact::getCreated() const { return created; }

void Contact::displayContact() const
{
  std::cout << "First Name: " << fname << std::endl;
  std::cout << "Last Name: " << lname << std::endl;
  std::cout << "Nickname: " << nick << std::endl;
  std::cout << "Phone Number: " << phnumber << std::endl;
  std::cout << "Darkest Secret: " << secret << std::endl;
}