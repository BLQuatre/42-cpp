/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:21:48 by cauvray           #+#    #+#             */
/*   Updated: 2025/04/09 16:29:32 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

template <typename Container>
class PmergeMe {
	private:
		typedef typename Container::value_type ValueType;
		typedef typename std::vector<ValueType>::iterator Iterator;
		Container& container;

		PmergeMe();
		PmergeMe(const PmergeMe &pmergeMe);
		PmergeMe	&operator=(const PmergeMe &pmergeMe);

		std::vector<size_t>	generateJacobsthalSequence(size_t max_n);
		std::vector<size_t>	generateInsertionOrder(size_t m);
		void				fordJohnsonSort(size_t start, size_t end);

	public:
		PmergeMe(Container& c);
		~PmergeMe();

		void sort();
		void printContainer();
};

template <typename Container>
PmergeMe<Container>::PmergeMe(Container& c) : container(c) {}

template <typename Container>
PmergeMe<Container>::~PmergeMe() {}

template <typename Container>
void PmergeMe<Container>::sort() {
	fordJohnsonSort(0, this->container.size());
}

template <typename Container>
void PmergeMe<Container>::printContainer() {
	typename Container::const_iterator it = this->container.begin();
	while (it != this->container.end()) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

/**
 * @note J(0) = 0, J(1) = 1, J(n) = J(n-1) + 2 * J(n-2)
 */
template <typename Container>
std::vector<size_t>	PmergeMe<Container>::generateJacobsthalSequence(size_t max_n) {
	std::vector<size_t> jacob;
	jacob.push_back(0);
	jacob.push_back(1);
	while (jacob.back() <= max_n) {
		size_t next = jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2];
		jacob.push_back(next);
	}
	return jacob;
}

template <typename Container>
std::vector<size_t>	PmergeMe<Container>::generateInsertionOrder(size_t m) {
	std::vector<size_t> order;
	if (m == 0)
		return order;
	order.push_back(0);
	if (m == 1)
		return order;

	std::vector<bool> added(m, false);
	added[0] = true;

	std::vector<size_t> jacob = this->generateJacobsthalSequence(m);
	for (size_t i = 2; i < jacob.size(); ++i) {
		size_t current = std::min(jacob[i], m - 1);
		size_t prev = jacob[i - 1];
		if (current <= prev)
			continue;

		for (size_t j = current; j > prev; --j) {
			if (!added[j]) {
				order.push_back(j);
				added[j] = true;
			}
			if (j == 0)
				break;
		}
	}

	for (size_t j = m - 1; j >= 1; --j) {
		if (!added[j]) {
			order.push_back(j);
			added[j] = true;
		}
	}

	return order;
}

template <typename Container>
void	PmergeMe<Container>::fordJohnsonSort(size_t start, size_t end) {
	size_t size = end - start;
	if (size <= 1) return;

	bool has_pending = (size % 2 != 0);
	ValueType pending;
	size_t pending_pos = end - 1;
	if (has_pending) {
		pending = this->container[pending_pos];
		end--;
	}

	for (size_t i = start; i < end; i += 2) {
		if (this->container[i] > this->container[i + 1]) {
			std::swap(this->container[i], this->container[i + 1]);
		}
	}

	std::vector<ValueType> high, low;
	for (size_t i = start + 1; i < end; i += 2) {
		high.push_back(this->container[i]);
		low.push_back(this->container[i - 1]);
	}

	PmergeMe<std::vector<ValueType> >(high).sort();

	std::vector<size_t> insert_order = this->generateInsertionOrder(low.size());
	for (size_t k = 0; k < insert_order.size(); ++k) {
		size_t idx = insert_order[k];
		Iterator it = std::lower_bound(high.begin(), high.end(), low[idx]);
		high.insert(it, low[idx]);
	}

	if (has_pending) {
		Iterator it = std::lower_bound(high.begin(), high.end(), pending);
		high.insert(it, pending);
	}

	for (size_t i = 0; i < high.size(); ++i) {
		this->container[start + i] = high[i];
	}
}
