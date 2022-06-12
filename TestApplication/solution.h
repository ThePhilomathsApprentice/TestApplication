#pragma once

#include <map>
#include <vector>
#include <iostream>

#include <stdexcept>


class Solution {
private:
    std::map<int, double> factorialMap;

    double fact(int f);

    double nCk(int n, int k);

public:
    Solution();
    ~Solution();
    std::vector<int> getRow(int rowIndex);
};