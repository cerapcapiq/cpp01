/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:53:44 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/06 12:53:44 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


/*
    int i = 10;

    int *j;
    j = &i;
    int &k = i;

     cout << i << endl;  = 10
    cout << &i << endl;  = 0x84a87
    cout << j << endl;   = 0x84a87
     cout << k << endl;  = 10 
*/

int main(void)
{
    std::string  string = "HI THIS IS BRAIN";

    std::string *stringPTR = &string; 
	std::string &stringREF = string;

    //memory address of string 
    std::cout << &string << std::endl;
    std::cout << &stringREF << std::endl; 
    std::cout << &*stringPTR << std::endl; //same
    std::cout << stringPTR << std::endl;

    std::cout<< std::endl;

    //value inside string
    std::cout << string << std::endl; //same
    std::cout << *stringPTR << std::endl; //same
    std::cout << *&stringREF << std::endl; //same
    std::cout << stringREF << std::endl;

    std::cout<< std::endl;

    string = "IM NOT BRAIN, IM A STRING";

    //memory address of string 
    std::cout << &string << std::endl;
    std::cout << &stringREF << std::endl; 
    std::cout << &*stringPTR << std::endl; //same
    std::cout << stringPTR << std::endl;

    std::cout<< std::endl;

    //value inside string
    std::cout << string << std::endl; //same
    std::cout << *stringPTR << std::endl; //same
    std::cout << *&stringREF << std::endl; //same
    std::cout << stringREF << std::endl;
}