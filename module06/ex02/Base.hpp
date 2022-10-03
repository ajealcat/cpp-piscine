/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:56:14 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/03 14:02:32 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base
{
	public:
		virtual ~Base();

};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);


#endif /* ************************************************************ BASE_H */