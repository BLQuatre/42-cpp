/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:33:02 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/04 18:18:10 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <stdexcept>
#include "Span.hpp"

Span::Span(unsigned int N): _maxSize(N) {
	this->_array.reserve(N);
}

Span::Span(const Span &span): _array(span._array), _maxSize(span._maxSize) {
}

Span::~Span() {
}

Span	&Span::operator=(const Span &span) {
	if (this != &span) {
		this->_array = span._array;
	}
	return (*this);
}

int	&Span::operator[](unsigned int index) {
	if (index >= this->_array.size()) {
		throw std::out_of_range("Index out of range");
	}
	return this->_array[index];
}

const int	&Span::operator[](unsigned int index) const {
	if (index >= this->_array.size()) {
		throw std::out_of_range("Index out of range");
	}
	return this->_array[index];
}

void	Span::addNumber(int value) {
	if (this->_array.size() >= this->_maxSize)
		throw Span::SpanOverflowException();

	this->_array.push_back(value);
}

void	Span::addNumbers(const std::vector<int>vector) {
	size_t count = static_cast<size_t>(std::distance(vector.begin(), vector.end()));

	if (count > (this->_maxSize - this->_array.size()))
		throw Span::SpanOverflowException();

	this->_array.insert(this->_array.end(), vector.begin(), vector.end());
}

int	Span::shortestSpan() const {
	if (this->_array.size() <= 1) {
		throw Span::NotEnoughElementsException();
	}
	std::vector<int> tmp(this->_array);
	std::sort(tmp.begin(), tmp.end());

	int min = tmp[1] - tmp[0];
	for (size_t i = 2; i < tmp.size(); i++)
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];

	return min;
}

int	Span::longestSpan() const {
	if (this->_array.size() <= 1) {
		throw Span::NotEnoughElementsException();
	}

	std::vector<int> tmp(this->_array);
	std::sort(tmp.begin(), tmp.end());

	return tmp[tmp.size() - 1] - tmp[0];
}

const char	*Span::NotEnoughElementsException::what() const throw() {
	return "Cannot determine shortest/longest span with fewer than two numbers.";
}

const char	*Span::SpanOverflowException::what() const throw() {
	return "Cannot add more elements: span is already full.";
}
