#pragma once

#include <map>
#include <vector>
#include <iostream>
#include <stdexcept>


class Pascal {
private:
    std::map<int, double> factorialMap;

    double fact(int f);

    double nCk(int n, int k);

public:
    Pascal();
    ~Pascal();
    std::vector<int> getRow(int rowIndex);
};