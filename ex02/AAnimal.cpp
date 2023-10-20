/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:54:22 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/20 16:01:55 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// constructors
AAnimal::AAnimal() : _type("Default")
{
	std::cout << "AAnimal default constructor called\n";
}

AAnimal::AAnimal (std::string type) : _type(type)
{
	std::cout << "AAnimal constructor called\n";
}

AAnimal::AAnimal(const AAnimal &other) : _type(other._type)
{
	std::cout << "AAnimal copy constructor called\n";
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	_type = other._type;
	std::cout << "AAnimal copy assignment constructor called\n";
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal deconstructor called\n";
}


// member functions
void AAnimal::makeSound() const
{
	std::cout << "AAnimal could make several different sounds\n";
}

std::string AAnimal::getType() const
{
	return (_type);
}
