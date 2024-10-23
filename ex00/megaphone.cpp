/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:38:37 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/02 17:47:53 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;
    
    j = -1;
    if (argc < 2)
            std::cout << "* LOUD AND UNBEARBALE FEEDBACK NOISE *";
    while (argc > 1 && argv && argv[++j])
    {
        
    }

    return (0);
}