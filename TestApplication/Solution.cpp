/*
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it:

Example 1:
Input: rowIndex = 3
Output: [1,3,3,1]

Example 2:
Input: rowIndex = 0
Output: [1]

Constraints:
0 <= rowIndex <= 33

*/

#include "solution.h"


double Solution::fact(int f) {
        double factorial = 1;
        if (f <= 1) {
            return (factorial);

        }
        else {
            try {
                factorial = factorialMap.at(f);

            }
            catch (const std::out_of_range& oor) {
                for (int i = 1; i <= f; i++) {

                    factorial *= i;

                }

                factorialMap.insert(std::pair<int, double>(f, factorial));

            }

            return (factorial);
        }

        return (factorial);
}

double Solution::nCk(int n, int k) {

        double result = ((fact(n) / fact(n - k)) / (fact(k)));//static_cast<int>

        return result;
}

std::vector<int> Solution::getRow(int rowIndex) {
        std::vector<int> pascalIntRow;

        for (int i = 0; i <= rowIndex; i++) {
            pascalIntRow.push_back(round(nCk(rowIndex, i)));

        }

        return pascalIntRow;
 }