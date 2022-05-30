/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:37:01 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/30 16:21:59 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"

#include <string>
#include <iostream>

class Convert
{
	public:
	Convert();
	Convert(std::string str);
	~Convert();
	Convert(Convert const &copy);
	
	Convert &operator=(Convert const &rhs);
	enum 	e_type {isChar, isInt, isFloat, isDouble, isWrong};
	void	convertData();
	void	print_Data();

	private:
		e_type _array[5];
		char 		_c;
		int	 		_int;
		float		_float;
		double		_db;
		std::string _str;
		e_type 		_type;

	void	getChar();
	void	getInt();
	void 	getFloat();
	void 	getDouble();
	e_type	getType();

};

#endif