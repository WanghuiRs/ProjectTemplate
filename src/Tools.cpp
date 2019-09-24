#include <Tools.h>

void Tools::print()
{
    std::cout << "Hello World..." << std::endl;
}

Tools Tools::getInstance()
{
    return tools;
}