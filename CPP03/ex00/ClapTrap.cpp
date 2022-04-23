#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "Clappy";
    _hitPoint = 0;
    _energyPoint = 0;
    _attackDamage = 0;
    std::cout << VIO "Le constructeur par défaut créer Clappy" NC << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << VIO "Le destructeur détruit Clap Trap " << _name << "." NC << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    _hitPoint = 10;
    _energyPoint = 10;
    _attackDamage = 0;
    std::cout << VIO "Le constructeur à créé Clap Trap " << _name << ". Il a " << _energyPoint << " vies" NC<< std::endl;

}

void    ClapTrap::attack(const std::string &target)
{
    if (_energyPoint > 0)
    {
        std::cout << BLU "Clap Trap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage" NC << std::endl;
        _energyPoint--;
    }
    else
    	std::cout << RED "Clap Trap " << _name << " n'a plus d'énergie, il ne peut plus attaquer !" NC << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    _energyPoint -= amount;
	if (_energyPoint > 0)
    	std::cout << RED "Clap Trap " << _name << " se fait attaquer. Il ne lui reste plus que " << _energyPoint << " de vie." NC << std::endl;
	else
		std::cout << RED "Clap Trap " << _name << " prend " << amount << " de dégats. Il se meurt." NC << std::endl;	
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoint > 0)
	{
		_energyPoint += (amount - 1);
		if (_energyPoint > 10)
			_energyPoint = 10;
		std::cout << CYN "Clap Trap " << _name << " se répare de " << amount << ". Il a maintenant " << _energyPoint << " de vie." NC << std::endl;
	}
	else
		std::cout << RED "Clap Trap " << _name << " ne peut pas se réparer, appelez une sirène." NC << std::endl;
		return ;
}