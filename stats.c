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
 * @file stats.c
 * @brief Basic operations of statistics on unsigned char arry.
 *
 * perform some basic operations on unsigned char array like maximun,minimum,mean,mode,sorting of array etc...
 *
 * @author Yashkumar Bhensdadiya
 * @date 16 May 2020
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned int length=SIZE;
  unsigned char *arr=&test;
  float mean,median;
  unsigned char max,min;
  /* Statistics and Printing Functions Go Here */
  max=find_maximum(arr,length);
  min=find_minimum(arr,length,max);
  mean=find_mean(arr,length);
  printf("\nBefore Sorting Array is: ");
  print_array(arr,length);
  sort_array(arr,length);
  printf("\nAfter Sorting Array is : ");
  print_array(arr,length);
  median=find_median(arr,length);
  print_statistics(max,min,mean,median);

  
}
/* Add other Implementation File Code Here */

unsigned char find_maximum(unsigned char *arr,unsigned int length)
{
	
}



unsigned char find_minimum(unsigned char *arr,unsigned int length,unsigned char max)
{
	
}


float find_mean(unsigned char *arr,unsigned int length)
{
	
}

void print_array(unsigned char *arr,unsigned int length)
{
	
}

void sort_array(unsigned char *arr,unsigned int length)
{
		
	
}


float find_median(unsigned char *arr,unsigned int length)
{
	
}




void print_statistics(unsigned char max,unsigned char min,float mean,float median)
{
	
}

