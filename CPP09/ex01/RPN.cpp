#include "RPN.hpp"

RPN::RPN(const char *rpn_exp) : _rpn_exp(rpn_exp), _opCount(0), _nbCount(0)
{
    // check for rpn_exp content
    // checkRpnExp();

    // check for rpn_format
    checkRpnFormat();
    calculate();
}

RPN::RPN() {}
RPN::RPN(const RPN &other) { *this = other; }
RPN &RPN::operator=(const RPN &rhs)
{
    if (this != &rhs)
    {
        this->_rpn_exp = rhs._rpn_exp;
        this->_opCount = rhs._opCount;
        this->_nbCount = rhs._nbCount;
        this->_stack = rhs._stack;
    }
    return *this;
}
RPN::~RPN() {}

/*
At least one operator (+ = * /) and two operands from 0 to 9
If you have n operators, you need n + 1 operands to form a valid RPN expression.
*/
void RPN::checkRpnFormat()
{
    std::istringstream ss(_rpn_exp);

    for (std::string token; std::getline(ss, token, ' ');)
    {
        if (isOperator(token[0]))
        {
            if (token.length() > 1)
            {
                std::cerr << RED << "Wrong arguments at " << token << ". Supported operator are + / - *" NC << std::endl;
                exit(EXIT_FAILURE);
            }
            std::cout << "Operator: " << token << std::endl;
            _opCount++;
        }
        else if (isNumber(token[0]))
        {
            if (token.length() > 1)
            {
                std::cerr << RED << "Invalid argument at " << token << ". Allowed numbers are from 0 to 9." NC << std::endl;
                exit(EXIT_FAILURE);
            }
            std::cout << "Number: " << token << std::endl;
            _nbCount++;
        }
        else
        {
            std::cerr << RED << "Invalid character " << token << NC << std::endl;
            exit(EXIT_FAILURE);
        }
    }
    if (_opCount == 0 || _nbCount < 0 || ((_opCount + _nbCount) % 2) == 0)
    {
        std::cerr << RED << "Invalid expression" << NC << std::endl;
        exit(EXIT_FAILURE);
    }

    std::cout
        << "Operators: " << _opCount << " Numbers: " << _nbCount << std::endl;
}

void RPN::calculate()
{
    std::cout << "Calculating..." << std::endl;
    for (size_t i = 0; i < _rpn_exp.length(); i++)
    {
        if (isNumber(_rpn_exp[i]))
        {
            std::cout << "Push: " << _rpn_exp[i] << std::endl;
            _stack.push(_rpn_exp[i] - '0');
        }
        else if (isOperator(_rpn_exp[i]))
        {
            if (_stack.size() < 2)
            {
                std::cerr << RED << "Error: Not enough operands in the stack for operator " << _rpn_exp[i] << ". Check the format of you expression." NC << std::endl;
                exit(EXIT_FAILURE);
            }
            int a = _stack.top();
            _stack.pop();
            int b = _stack.top();
            _stack.pop();
            switch (_rpn_exp[i])
            {
            case '+':
                _stack.push(b + a);
                std::cout << "Add: " << b << " + " << a << " = " << b + a << std::endl;
                break;
            case '-':
                _stack.push(b - a);
                std::cout << "Sub: " << b << " - " << a << " = " << b - a << std::endl;
                break;
            case '*':
                _stack.push(b * a);
                std::cout << "Mul: " << b << " * " << a << " = " << b * a << std::endl;
                break;
            case '/':
                if (a == 0)
                {
                    std::cerr << RED << "Error: Division by zero" << NC << std::endl;
                    exit(EXIT_FAILURE);
                }
                _stack.push(b / a);
                std::cout << "Div: " << b << " / " << a << " = " << b / a << std::endl;
                break;
            }
        }
    }
    std::cout << _stack.top() << std::endl;
}

/*UTILS*/
bool RPN::isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/') ? true : false;
}

bool RPN::isNumber(char c)
{
    return (c >= '0' && c <= '9') ? true : false;
}
