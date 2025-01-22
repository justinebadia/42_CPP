/*
In reverse polish notation, the operators follow their operand:
3 4 + is equivalent to 3 + 4
3 - 4 + 5 is equivalent to 3 4 - 5 + ->  4 is first subtracted from 3, then 5 is added to it

Concept of Stack -> last in first out is integral to the left-to-right evaluation of RPN

Ex:
$> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
42

TODO:
You must create a program with these constraints:
    [] The program name is RPN.
    [] Your program must take an RPN expression as an argument.
    [] The numbers used in this operation and passed as arguments will always be less
        than 10. The calculation itself but also the result do not take into account this rule.
    [] Your program must process this expression and output the correct result on the
        standard output.
    [] If an error occurs during the execution of the program an error message should be
        displayed to STDOUT.
    [] Your program must be able to handle operations with these tokens: "+ - / *".
*/
#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        RPN rpn(argv[1]);
        return (EXIT_SUCCESS);
    }
    std::cout << RED << "Error: Wrong arguments !\nUsage: ./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\"" NC << std::endl;
    return (EXIT_FAILURE);
}
