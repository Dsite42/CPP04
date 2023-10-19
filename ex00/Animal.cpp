/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:54:22 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/19 23:04:09 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// constructors
Animal::Animal() : _type("Default")
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal (std::string type) : _type(type)
{
	std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal &other) : _type(other._type)
{
	std::cout << "Animal copy constructor called\n";
}

Animal &Animal::operator=(const Animal &other)
{
	_type = other._type;
	std::cout << "Animal copy assignment constructor called\n";
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal: Deconstructor called\n";
}


// member functions
void Animal::makeSound() const
{
	std::cout << "Animal could make several different sounds\n";
}

std::string Animal::getType()
{
	return (_type);
}

