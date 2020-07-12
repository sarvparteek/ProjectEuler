/*!
 * @brief Solution for Problem 1 : Multiples of 3 and 5
 * @author Sarv Parteek Singh
 * @date July-05-2020
 * @details If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of
 *          these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
 */

#ifndef PROJECTEULER_PROB1_HPP
#define PROJECTEULER_PROB1_HPP

#include <stdint.h> // for uint32_t, uint64_t
#include <cassert> // for assert
#include <iostream> // for cout, during testing

uint64_t multipleSum(uint32_t const &num1, uint32_t const &num2, uint32_t const &limit)
{
    uint64_t sum = 0;
    for (uint32_t i = 0; i < limit; ++i)
    {
        if ( ( i % num1 == 0 && i % num2 != 0) || (i % num2 == 0) )
        {
            sum += i;
        }
    }

    return sum;
}

void testProblem1()
{
    assert(multipleSum(3,5,10) == 23);
    assert(multipleSum(3,5,1000) == 233168);
}

#endif //PROJECTEULER_PROB1_HPP
