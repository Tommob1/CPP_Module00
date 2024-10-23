/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:00:00 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/23 13:16:54 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <string>
#include <iostream>
#include <ctime>

class Contact
{
	private:
		std::string fname;
		std::string lname;
		std::string nick;
		std::string phnumber;
		std::string secret;
		time_t 		created;

	public:
		Contact();
		~Contact();
		Contact(std::string first_name, std::string last_name, std::string nick_name,
			std::string phone_number, std::string darkest_secret);
		
		std::string	getLastName() const;
		std::string	getFirst_name() const;
		std::string	getNick_name() const;
		std::string	getPhone_number() const;
		std::string	getDarkest_secret() const;
		time_t		getCreated() const;
};
#endif