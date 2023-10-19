/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:21:10 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/19 23:15:44 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// constructors
Dog::Dog() : Animal()
{
	_type = "Default";
	std::cout << "Dog default constructor called\n";
}

Dog::Dog (std::string type) : Animal(type)
{
	_type = type;
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
	std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other)
{
	_type = other._type;
	std::cout << "Dog copy assignment constructor called\n";
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: Deconstructor called\n";
}


// member functions
void Dog::makeSound() const
{
	std::cout << "Wau Wau Wau\n";
}
