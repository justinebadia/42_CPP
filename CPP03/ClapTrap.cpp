#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "Clappy";
    _hitPoint = 0;
    _energyPoint = 0;
    _attackDamage = 0;
    std::cout << "Le constructeur par défaut créer Clappy" std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Le destructeur détruit Clap Trap " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    _hitPoint = 10;
    _energyPoint = 10;
    _attackDamage = 0;
    std::cout << "Le constructeur à créé Clap Trap " << _name << ". Il a " << _energyPoint << " de vie" << std::endl;

}

void    ClapTrap::attack(const std::string &target)
{
    if (_energyPoint > 0)
    {
        std::cout << "Clap Trap " << _name << "attacks " << target << "causing " << _attackDamage << " points of damage" << std::endl;
        _energyPoint--;
    }
    else
    std::cout << "Clap Trap " << _name << " n'a plus d'énergie, il ne peut plus attaquer !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    _energyPoint - amount;
    std::cout << "Clap Trap " << _name << "takes damage. Il ne lui reste plus que " << _energyPoint << " de vie." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    _energyPoint + amount - 1;
    if (_energyPoint > 10)
        _energyPoint = 10;
    std::cout << "Clap Trap " << _name << " se répare. Il a maintenant " << _energyPoint << " de vie." << std::endl;
}