#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <exception>
#include <fstream>
#include <sstream>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define REDB "\e[41m"
#define BLUP "\e[94m"
#define CYNP "\e[96m"
#define VIO "\e[35m"
#define NC "\e[0m"

class RPN
{
public:
    RPN(const char *rpn_exp);
    ~RPN();

private:
    RPN();
    RPN(const RPN &other);
    RPN &operator=(const RPN &rhs);

    std::string _rpn_exp;
    size_t _opCount;
    size_t _nbCount;

    std::stack<int> _stack;

    void calculate();
    void checkRpnFormat();
    // UTILS
    bool isOperator(char c);
    bool isNumber(char c);
};

#endif
