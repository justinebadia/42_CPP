/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:37:01 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/31 11:00:09 by jbadia           ###   ########.fr       */
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
	enum 	e_type {isChar, isInt, isFloat, isDouble, isLitt, isWrong};
	void	convertData();
	void	print_Data();

	private:
		e_type _array[4];
		char 		_c;
		long	 	_int;
		float		_float;
		double		_db;
		std::string _str;
		e_type 		_type;

	void	getChar();
	void	getInt();
	void 	getFloat();
	void 	getDouble();
	e_type	getType();
	bool 	isPseudoLitt();

};

#endif