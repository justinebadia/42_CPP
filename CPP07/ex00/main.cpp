/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:20:28 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/06 10:32:41 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main (void)
{
	{
		std::cout << CYN "INTEGER TEST\n" << NC;
		int a = -12;
		int b = 321;
		std::cout << GRN "a = " << a << NC << std::endl;
		std::cout << GRN "b = " << b << NC << std::endl;

		std::cout << BLU "MAX TEST: " << VIO;
		std::cout << max<int>(a, b) << std::endl;
		std::cout << BLU "MIN TEST : " << VIO;
		std::cout << min<int>(a, b) << std::endl;
		std::cout << BLU "SWAP TEST : ";
		swap<int>(a,b);
		std::cout << "a vaut " << VIO << a << BLU;
		std::cout << " et b vaut " VIO << b << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << CYN "DOUBLE TEST\n" << NC;
		double a = 23.345;
		double b = 4.3;
		std::cout << GRN "a = " << a << NC << std::endl;
		std::cout << GRN "b = " << b << NC << std::endl;
		std::cout << BLU "MAX TEST: "  << VIO;
		std::cout << max<double>(a, b) << std::endl;
		std::cout << BLU "MIN TEST : " << VIO;
		std::cout << min<double>(a, b) << std::endl;
		std::cout << BLU "SWAP TEST : ";
		swap<double>(a,b);
		std::cout << "a vaut " << VIO << a << BLU;
		std::cout << " et b vaut " << VIO << b << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << CYN "FLOAT TEST\n" << NC;
		float a = 233.345f;
		float b = 14.3f;
		std::cout << GRN "a = " << a << NC << std::endl;
		std::cout << GRN "b = " << b << NC << std::endl;
		std::cout << BLU "MAX TEST: " << VIO;
		std::cout << max<float>(a, b) << std::endl;
		std::cout <<BLU  "MIN TEST : " << VIO;
		std::cout << min<float>(a, b) << std::endl;
		std::cout << BLU "SWAP TEST : ";
		swap<float>(a,b);
		std::cout << "a vaut " << VIO << a << BLU;
		std::cout << " et b vaut " << VIO << b << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << CYN "STRING TEST\n" << NC;
		std::string a = "salut";
		std::string b = "aurevoir";
		std::cout << GRN "a = " << a << NC << std::endl;
		std::cout << GRN "b = " << b << NC << std::endl;
		std::cout << BLU "MAX TEST: " << VIO;
		std::cout << ::max(a, b) << std::endl;
		std::cout << BLU "MIN TEST : " << VIO;
		std::cout << ::min<std::string>(a, b) << BLU << std::endl;

		::swap<std::string>(a,b);
		std::cout << "a vaut " << VIO << a << BLU;
		std::cout << " et b vaut " << VIO << b << std::endl;
		std::cout << std::endl;
	}
}

// int main( void ) 
// { 
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0; 
// }