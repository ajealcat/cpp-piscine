/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:14:36 by ajearuth          #+#    #+#             */
/*   Updated: 2023/03/22 17:17:16 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class RPN
{

	public:

		RPN();
		RPN(RPN const &src);
		RPN &operator=(RPN const &rhs);
		~RPN();

		std::stack<int> const &getStack() const;

		bool operateur(const char c);
		void calcul(std::string str);
		bool checkvalidity(std::string str);

	private:
		std::stack<int> _pile;

};


#endif /* ************************************************************* RPN_H */
