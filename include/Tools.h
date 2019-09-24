/*
** EPITECH PROJECT, 2019
** CProjectTemplate
** File description:
** Tools
*/

#ifndef TOOLS_H_
#define TOOLS_H_
#include <iostream>

class Tools
{
private:
    const static Tools tools;
    Tools();

public:
    static Tools getInstance();
    void print();
};
#endif /* !TOOLS_H_ */
