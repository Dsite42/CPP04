/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:52:12 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/20 14:42:38 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	{
		std::cout << "\033[33m" << "From PDF\n"<< "\033[0m";
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}

	{
		std::cout << "\033[33m" << "\nFrom PDF but exchanged with WrongAnimal and WrongCat\n"<< "\033[0m";
		const WrongAnimal* meta = new WrongAnimal();
		const Animal* j = new Dog();
		
		const WrongAnimal* i = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	
	{
		std::cout << "\033[33m" << "\nWrongCat\n"<< "\033[0m";
		WrongCat wrong_cat;
		wrong_cat.makeSound();
		WrongAnimal* wrong_animal = NULL;
		wrong_animal = new WrongCat();
		
		std::cout << "\033[33m" << "\nWrongAnimal\n"<< "\033[0m";
		wrong_animal->makeSound();
		delete wrong_animal;
	}
	return 0;
}
