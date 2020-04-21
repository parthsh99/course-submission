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
 * @file <stats.c> 
 * @brief < Basic operations like minimum,maximum,mean,median, sorting on dataset >
 *
 * 
 * @author parthShinde
 * @date 21/04/20
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define len (40)

void main() {

  unsigned char data[len] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  display(data, len);
}

/* Add other Implementation File Code Here */

void display(unsigned char array[], unsigned int length){
	printf("Original data:\n\n");
	disp_data(array, length);
	sort_data(array, length);
	printf("Sorted data:\n");
	disp_data(array, length);
	printf("Median of data : %d\n", median(array, length));
	printf("Mean of data : %d\n", mean(array, length));
	printf("Max of data : %d\n", max(array, length));
	printf("Min of data : %d\n\n", min(array, length));	
	return;
}

void disp_data(unsigned char array[], unsigned int length){
	for(int i = 0; i < length/8; i++){
		for(int j = 0; j < length/5; j++){
		       printf("%3d  ", array[8*i+j]);
		}
 		printf("\n");
	}
	
	printf("\n");	
	return;
}

unsigned char median(unsigned char array[], unsigned int length){
	return array[(length-1)/2];
}

unsigned char mean(unsigned char array[], unsigned int length){
	unsigned int sum = 0;
	for(int i = 0; i < length; i++){
		sum += array[i];	
	}

	return (unsigned char)( sum / length );
}

unsigned char max(unsigned char array[], unsigned int length){
	return array[length-1];
}

unsigned char min(unsigned char array[], unsigned int length){
	return array[0];
}

void sort_data(unsigned char array[], unsigned int length){
	unsigned char tmp;
	for(int i = 0; i < length; i++){
		for(int j = i; j < length; j++){
			if(array[j] < array[i]){
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
			}
		}
	}
	return;
}
