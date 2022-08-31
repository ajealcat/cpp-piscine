/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:04:37 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/31 16:31:24 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

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


#endif /* ************************************************************ HARL_H */