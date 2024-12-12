#ifndef ARRAYSCALC_HPP
#define ARRAYSCALC_HPP

#include <iostream>
#include <cstddef>

/**
 * @brief This class holds the primary array and 2D array calculator
 * functions. 
 * 
 * @author Rose McCormack
 * @version 2025
 */
class ArrayCalc 
{
    private:

    /**
     * @brief This function calculates the sum of a 1D array.
     * 
     * @param arr 1D array whose sum is being calculated.
     * @return Returns the sum of the array.
     */
    template <typename T> T calcSum(T arr[]);

    /**
     * @brief This function calculates the product of a 1D array.
     * 
     * @param arr 1D array whose product is being calculated.
     * @return Returns the product of the array.
     */
    template <typename T> T calcProduct(T arr[]);

    /**
     * @brief This function returns the maximum value in a 1D array.
     * 
     * @param arr 1D array whose max is being searched.
     * @return Returns the maximum value found in the array.
     */
    template <typename T> T calcMax(T arr[]);

    /**
     * @brief This function returns the minimum value in a 1D array.
     * 
     * @param arr 1D array whose min is being searched.
     * @return Returns the minimum value found in the array.
     */
    template <typename T> T calcMin(T arr[]);

    /**
     * @brief This function calculates the sum of a 2D array.
     */
    template <typename T, size_t N> T calcSum(T arr[][N], size_t rows);
};

#endif ARRAYSCALC_HPP