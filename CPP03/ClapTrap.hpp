#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class CLAPTRAP_HPP
{
    public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string name);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    private:
    std::string _name; 
    int         _hitPoint; 
    int 		_energyPoint; 
    int 		_attackDamage;

};


#endif