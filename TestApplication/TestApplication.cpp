// TestApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "myHeader.h"
#include "pascal.h"

int main()
{
    HELLO("Yash Joshi");

    Pascal obj;
    std::vector<int> pascalRow;
    pascalRow = obj.getRow(5);

    for (int i = 0; i < pascalRow.size(); i++)
        std::cout << pascalRow.at(i) << " ";
    std::cout << "\n";

    return 0;
}