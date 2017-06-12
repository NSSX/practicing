/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 14:51:50 by avella            #+#    #+#             */
/*   Updated: 2017/06/12 14:51:53 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av){

    if (ac > 1){
        int index = 1;
        int indexWord = 0;

        while (index < ac){
            indexWord = 0;
            while (av[index][indexWord]){
                std::cout << (char)std::toupper(av[index][indexWord]);
                indexWord++;
            }
            index++;
        }
        std::cout << std::endl;
    }
    else{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }

    return (0);
}
