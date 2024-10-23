/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:38:37 by btomlins          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/02 17:47:53 by btomlins         ###   ########.fr       */
=======
/*   Updated: 2024/10/02 17:58:19 by btomlins         ###   ########.fr       */
>>>>>>> 96bd954eda31c1a97e175bd0c01f690ce2399c67
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;
    
    j = -1;
    if (argc < 2)
<<<<<<< HEAD
            std::cout << "* LOUD AND UNBEARBALE FEEDBACK NOISE *";
    while (argc > 1 && argv && argv[++j])
    {
        
    }

=======
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (argc > 1 && argv && argv[++j])
    {
        i = -1;
        while (j > 0 && argv[j][++i])
                std::cout << (char)std::toupper(argv[j][i]);
    }
    std::cout << std::endl;
>>>>>>> 96bd954eda31c1a97e175bd0c01f690ce2399c67
    return (0);
}
