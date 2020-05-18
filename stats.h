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
 * @brief Basic operations of statistics on unsigned char arry.
 *
 * Given an array is of unsigned char type and having fixed length..
 * we have to perform some basic operations like maximun,minimum,mean,mode,sorting of array etc...
 *
 * @author Yashkumar Bhensdadiya
 * @date 16 May 2020
 *
 */
 
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
unsigned char find_maximum(unsigned char *arr,unsigned int length);
/**
 * Its job is to find maximum from Given array and return maximum value.
 *
 * unsigned char *arr  ;to access array and iterate through it.
 * unsigned int length ;to know about the length for length of loop.
 *
 * @return returns a unsigned char value i.e. maximum of array.
 */
unsigned char find_minimum(unsigned char *arr,unsigned int length,unsigned char max);
/**
 * Its job is to find maximum from Given array and return maximum value.
 *
 * unsigned char *arr  ;to access array and iterate through it.
 * unsigned int length ;to know about the length for length of loop.
 * unsigned char max ; using max easy to find miminum value.
 * @return returns a unsigned char value i.e. maximum of array.
 */
float find_median(unsigned char *arr,unsigned int length);
/**
 * Its job is to calculate median of unsigned char array and return result or median.
 *
 * unsigned char *arr  ;to access array elements and iterate through it.
 * unsigned int length ;to know about the length for length of loop.
 *
 * @return returns a float value i.e median of array.
 */
float find_mean(unsigned char *arr,unsigned int length);
/**
 * Its job is to calculate mean of unsigned char array and return result or mean.
 *
 * unsigned char *arr  ;to access array and iterate through it.
 * unsigned int length ;to know about the length for length of loop.
 *
 * @return returns a float value i.e mean of array.
 */

void print_array(unsigned char *arr,unsigned int length);
/**
 * Its job is to print the array elements.
 *
 * unsigned char *arr  ;to access array and iterate through it.
 * unsigned int lenght ;to know about the length for length of loop.
 */
void sort_array(unsigned char *arr,unsigned int length);
/**
 * Its job is to sort the given array in descending order.
 *
 * unsigned char *arr  ;used for access array and iterate through it.
 * unsigned int length ;used for know about the length for length of loop.
 */
void print_statistics(unsigned char min,unsigned char max,float mean,float median);
/*
 * Its job is to print all statistics calculation like mean,mode,max,min etc..
 *
 * unsigned char max ;used for print maximum of array.
 * unsigned char min ;used for print minimum of array.
 * float mean        ;used for print mean of array.
 * float median      ;used for print median of array.
 */




#endif /* __STATS_H__ */
