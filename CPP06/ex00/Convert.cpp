/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:36:57 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/31 11:05:23 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <ctype.h>
#include <cfloat>
#include <iomanip>

Convert::Convert(std::string str) : _c('0'), _int(0), _float(0.0f), _db(0.0), _str(str)
{
	_array[0] = isChar;
    _array[1] = isInt;
    _array[2] = isFloat;
    _array[3] = isDouble;
	_type = getType();
}

Convert::Convert() : _c('0'), _int(0), _float(0.0f), _db(0.0),  _str("str")
{
	_array[0] = isChar;
    _array[1] = isInt;
    _array[2] = isFloat;
    _array[3] = isDouble;
	_type = getType();
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

	if (isPseudoLitt())
		return isLitt;
	if (_str.length() == 1 && (isprint(_str[0]) && !isdigit(_str[0])))
	{
		_c = _str[0];
		return isChar;
	}
	for (; i < _str.size(); i++)
	{
		if (!isdigit(_str[i]) && (_str[i] != '-' && _str[i] != '+'))
			break ;
		if (i == _str.size() - 1)
		{
			_int = atol(_str.c_str());
			return isInt;
		}
	}
	if (_str[i] == '.')
	{
		i++;
		for (; i < _str.size() ; i++)
			if (!isdigit(_str[i]))
				break ;
		if (_str[i] == 'f' && i == _str.size() - 1)
		{
			_float = atof(_str.c_str());	
			return isFloat;
		}
		else
		{
			_db = std::stod(_str.c_str());
			return isDouble;
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
			break;

		}
		case 1: //int
		{
			_c = static_cast<char>(_int);
			_float = static_cast<float>(_int);
			_db = static_cast<double>(_int);
			break ;
		}
		case 2://float
		{
			_c = static_cast<char>(_float);
			_int = static_cast<int>(_float);
			_db = static_cast<double>(_float);
			break ;
		}
		case 3://double
		{
			_c = static_cast<char>(_db);
			_int = static_cast<int>(_db);
			_float = static_cast<double>(_db);
			break ;
		}
		default : 
			std::cout << "ERROR" << std::endl;
			break;
	}
}

void	Convert::print_Data(void)
{
	getChar();
	getInt();
	getFloat();
	getDouble();
}

bool 	Convert::isPseudoLitt(void)
{
	if (_str == "-inff" || _str == "+inff" || _str == "nanf" || _str == "-inf"
		|| _str == "-inf" || _str == "nan")
		return true;
	return false;
}

void	Convert::getChar(void)
{
	std::cout << "char: ";
	if (_type == isWrong || _type == isLitt)
		std::cout << "impossible\n";
	else if (_c < 32 || _c > 126)
		std::cout << "Non displayable\n";
	else 
		std::cout << _c << std::endl;
}

void 	Convert::getInt(void)
{
	std::cout << "int: ";
	if (_type == isWrong || _type == isLitt)
		std::cout << "impossible\n";
	else
	{
		long over = atol(_str.c_str());
		if (over > INT32_MAX || over < INT32_MIN)
			std::cout << "overflow\n";
		else
			std::cout << _int << std::endl;
	}
}

void	Convert::getFloat(void)
{
	std::cout << "float: ";
	if (_type == isWrong)
		std::cout << "impossible\n";
	else if (_type == isLitt)
	{
		if (_str == "-inf" || _str == "+inf" || _str == "nan")
			std::cout << _str << "f" << std::endl;
		else
			std::cout << _str << std::endl;
	}
	else
	{
		float over = atof(_str.c_str());
		if (over > FLT_MAX || over < FLT_MIN)
			std::cout << "overflow\n";
		else
			std::cout << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
	}
}

void 	Convert::getDouble(void)
{
	std::cout << "double: ";
	if (_type == isWrong)
		std::cout << "impossible\n";
	else if (_type == isLitt)
	{
		if (_str == "-inff" || _str == "+inff" || _str == "nanf")
			std::cout << _str.erase(_str.size() - 1) << std::endl;
		else
			std::cout << _str << std::endl;
	}
	else
	{
		float over = atof(_str.c_str());
		if (over > DBL_MAX || over < DBL_MIN)
			std::cout << "overflow\n";
		else
			std::cout << std::fixed << std::setprecision(1) << _db << std::endl;
	}
}