/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:33:02 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/03 17:15:54 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <stdexcept>
#include "Array.hpp"

template <typename T>
Array<T>::Array(): _array(NULL), _size(0) {
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n) {
	this->_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->_array[i] = 0;
}

template <typename T>
Array<T>::Array(const Array &array) {
	this->_array = new T[array._size];
	this->_size = array._size;
	for (unsigned int i = 0; i < array._size; i++)
		this->_array[i] = array[i];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &array) {
	if (&array != this) {
		delete[] this->_array;
		this->_array = new T[array._size];
		this->_size = array._size;
		for (unsigned int i = 0; i < array._size; i++)
			this->_array[i] = array._array[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] this->_array;
}

template <typename T>
T		&Array<T>::operator[](unsigned int index) {
	if (index >= this->_size) {
		throw std::out_of_range("Index out of bound");
	}

	return this->_array[index];
}

template <typename T>
const T	&Array<T>::operator[](unsigned int index) const {
	if (index >= this->_size) {
		throw std::out_of_range("Index out of bound");
	}

	return this->_array[index];
}

template <typename T>
unsigned int	Array<T>::size() const {
	return this->_size;
}

#endif
