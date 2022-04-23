#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"

class ClapTrap
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