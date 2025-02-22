/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 03:00:22 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 03:09:31 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# define MATERIA_SIZE 4

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource {
	private:
		AMateria	*_materia[MATERIA_SIZE];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &materiaSource);
		MateriaSource	&operator=(const MateriaSource &materiaSource);
		~MateriaSource();

		void		learnMateria(AMateria*);
		AMateria*	createMateria(const std::string &type);
};

#endif
