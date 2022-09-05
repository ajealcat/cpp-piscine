/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:04:37 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/05 16:58:52 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Harl
{

	public:

		Harl();
		~Harl();

	void complain(std::string level) const;

	private:
	
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;

};


typedef struct s_dict
{
	std::string	key;
	void	(Harl::*f)(void) const;
}	t_dict;


#endif /* ************************************************************ HARL_H */