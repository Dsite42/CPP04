/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:54:15 by cgodecke          #+#    #+#             */
/*   Updated: 2023/11/06 13:17:18 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		// constructors
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();

		// member functions
		virtual void	makeSound() const;
		std::string		getType() const;

};

#endif
