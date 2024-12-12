#ifndef ARRAYSCALC_HPP
#define ARRAYSCALC_HPP

#include <iostream>
#include <cstddef>
#include <cstdlib.h>

/**
 * @brief This class holds the primary array and 2D array calculator
 * functions. 
 */
class ArrayCalc 
{
    private:

    /**
     * @brief This function calculates the sum of a 1D array.
     * 
     * @param arr 1D array whose sum is being calculated.
     */
    template <typename T> T calcSum(T arr[]);
    template <typename T, size_t N> T calcSum(T arr[][N], size_t rows);
};

#endif ARRAYSCALC_HPP