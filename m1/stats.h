/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief declarations file for stats.c
 *
 * @author parthShinde
 * @date 21/04/20
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/*Functions declaration with description*/

void print_statistics(unsigned char array[], unsigned int length);
/**
 * @brief function to print all the output arrays and values
 *
 * print all output arrays as required in assignment statements like sorted array,minimum,maximum,mean,median of the data
 *
 * @param array - Set of characters containing random natural numbers
 * @param length - length of the array 
 * 
 *
 * @return no return values 
 */

void print_array(unsigned char array[], unsigned int length);
/**
 * @brief function to print display array
 *
 * prints output array 
 *
 * @param array - Set of characters containing random natural numbers
 * @param length - length of the array 
 * 
 *
 * @return no return values 
 */

void sort_array(unsigned char array[], unsigned int length);
/** 
 * @brief Sorts the data using selection sort
 *
 * 
 * @param array An array of unsigned chars
 * @param length The length of the array
 *
 *@return no return value
 */

unsigned char find_median(unsigned char array[], unsigned int length);
/** 
 * @brief Given an array of data and a length, returns the median value
 *
 * @param array An array of unsigned chars
 * @param length The length of the array
 *
 * @return The median of the given data in array
 */

unsigned char find_min(unsigned char array[], unsigned int length);
/** 
 * @brief Given an array of data and a length, returns the minimum value
 *
 * @param array An array of unsigned chars
 * @param length The length of the array
 *
 * @return The minimum of the array
 */

unsigned char find_max(unsigned char array[], unsigned int length);
/** 
 * @brief Given an array of data and a length, returns the max value
 *
 * @param array An array of unsigned chars
 * @param length The length of the array
 *
 * @return The max of the array
 */

unsigned char find_mean(unsigned char array[], unsigned int length);
/** 
 * @brief Given an array of data and a length, returns the mean value
 *
 * @param array An array of unsigned chars
 * @param length The length of the array
 *
 * @return median The mean of the array
 */



#endif /* __STATS_H__ */
