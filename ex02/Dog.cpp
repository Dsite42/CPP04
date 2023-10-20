/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:21:10 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/20 20:54:22 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// constructors
Dog::Dog()
{
	std::cout << "Dog default constructor called\n";
	_type = "Dog";
	_own_brain = new Brain();
}

Dog::Dog (std::string type)
{
	std::cout << "Dog constructor called\n";
	_type = type;
	_own_brain = new Brain();
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
	std::cout << "Dog copy constructor called\n";
	_own_brain = new Brain(*(other._own_brain));
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment constructor called\n";
	_type = other._type;
	delete _own_brain;
	_own_brain = new Brain(*(other._own_brain));
	return (*this);
}

Dog::~Dog()
{
	delete _own_brain;
	std::cout << "Dog deconstructor called\n";
}


// member functions
void Dog::makeSound() const
{
	std::cout << "Wau Wau Wau\n";
}

std::string Dog::getIdea(int idea_nr) const
{
	if (idea_nr >= 0 && idea_nr < 100)
		return (_own_brain->ideas[idea_nr]);
	else
		return ("Dog brain just have 100 ideas");
}

void Dog::setIdea(int idea_nr, std::string new_idea)
{
	if (idea_nr >= 0 && idea_nr < 100)
		_own_brain->ideas[idea_nr] = new_idea;
	else
		std::cout << "Dog brain can just save 100 ideas";
}
