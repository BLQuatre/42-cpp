/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 21:31:19 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/25 22:19:10 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

# include "Base.hpp"

/**
 * It randomly instantiates A, B, or C and returns the instance as a Base pointer.
 * @note Feel free to use anything you like for the random choice implementation.
 */
Base	*generate();

/**
 * It prints the actual type of the object pointed to by p: "A", "B", or "C".
 * @throw std::invalid_argument if p is NULL or if it is not an instance of A, B, or C.
 */
void	identify(Base* p);

/**
 * It prints the actual type of the object referenced by p: "A", "B", or "C".
 * @note Using a pointer inside this function is forbidden.
 * @throw std::invalid_argument if p is NULL or if it is not an instance of A, B, or C.
 */
void	identify(Base& p);

#endif
