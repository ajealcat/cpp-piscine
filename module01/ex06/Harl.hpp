/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:41:33 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/08 15:41:46 by ajearuth         ###   ########.fr       */
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

	void complain(std::string level);

	private:
	
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};


#endif
