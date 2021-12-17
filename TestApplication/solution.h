#pragma once

#include <map>
#include <vector>
#include <stdexcept>


class Solution {
private:
    std::map<int, double> factorialMap;

    double fact(int f);

    double nCk(int n, int k);

public:
    std::vector<int> getRow(int rowIndex);
};