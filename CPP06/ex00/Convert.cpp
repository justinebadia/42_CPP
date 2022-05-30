/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:36:57 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/30 17:46:47 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <ctype.h>
#include <iomanip>

Convert::Convert(std::string str) : _c('0'), _int(0), _float(0.0f), _db(0.0), _str(str)
{
	_array[0] = isChar;
    _array[1] = isInt;
    _array[2] = isFloat;
    _array[3] = isDouble;
	_array[4] = isWrong;
	_type = getType();
}

Convert::Convert() : _c('0'), _int(0), _float(0.0f), _db(0.0),  _str("str")
{
	_array[0] = isChar;
    _array[1] = isInt;
    _array[2] = isFloat;
    _array[3] = isDouble;
	_array[4] = isWrong;
}

Convert::~Convert()
{}

Convert::Convert(Convert const &copy)
{
	*this = copy;
	return ;
}

Convert &Convert::operator=(Convert const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}



Convert::e_type	Convert::getType(void)
{
	size_t i = 0;

	if (_str.length() == 1 && isprint(_str[0])) // si > 1 erreur
	{
		std::cout << "char \n";
		_c = _str[0];
		return isChar;
	}
	for (; i < _str.size(); i++)
	{
		if (!isdigit(_str[i]))
			break ;
		if (i == _str.size() - 1)
		{
			std::cout << "int \n";
			_int = atoi(_str.c_str());
			return isInt;
		}
	}
	if (_str[i] == '.')
	{
		i++;
		for (; i < _str.size() ; i++)
		{
			if (!isdigit(_str[i]))
				break ;
			std::cout << "double \n";
			_db = std::stod(_str.c_str());
			return isDouble;
		}
		if (_str[i] == 'f' && i == _str.size() - 1)
		{
			std::cout << "float \n";
			_float = atof(_str.c_str());	
			return isFloat;
		}
	}
	std::cout << "isWrong\n";
	return isWrong;
}

void	Convert::convertData(void)
{
	unsigned int i = 0;
	for(; i < 5 ; i ++)
		if (_type == _array[i])
			break ;
	switch (i)
	{
		case 0: //char
		{
			_int = static_cast<int>(_c);
			_float = static_cast<float>(_int);
			_db = static_cast<double>(_int);
			std::cout << "chaaar";
			break;

		}
		// case 1: //int
		// case 2://float
		// case 3://double
		// case 4://wrong
	}
}

void	Convert::print_Data(void)
{
	getChar();
	getInt();
	getFloat();
	getDouble();
}

void	Convert::getChar(void)
{
	std::cout << "char: ";
	if (_type == isWrong)
		std::cout << "Non displayable\n";
	else 
		std::cout << _c << std::endl;
}

void 	Convert::getInt(void)
{
	std::cout << "int: ";
	if (_type == isWrong)
		std::cout << "Impossible\n";
	else
		std::cout << _int << std::endl;
}

void	Convert::getFloat(void)
{
	std::cout << "float: ";
	if (_type == isWrong)
		std::cout << "Impossible\n";
	else
		std::cout << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
}

void 	Convert::getDouble(void)
{
	std::cout << "double: ";
	if (_type == isWrong)
		std::cout << "Impossible\n";
	else
		std::cout << std::fixed << std::setprecision(1) << _db << std::endl;
}