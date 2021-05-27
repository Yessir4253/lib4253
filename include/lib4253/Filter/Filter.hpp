/**
 * @file Filter.hpp
 * @author Ryan Liao (23RyanL@students.tas.tw)
 * @brief Filter
 * @version 0.1
 * @date 2021-05-21
 *
 * @copyright Copyright (c) 2021
 *
 */

#pragma once
#include "main.h"

/**
* @brief Filter class
*
*/
class FilterBase{
  public:
    /**
    * @brief Resets filters
    *
    */
    virtual void reset() = 0;

    /**
     * @brief Converts raw values through filter
     *
     * @param input raw values
     * @return filtered values
     */
    virtual double filter(double input) = 0;
  };