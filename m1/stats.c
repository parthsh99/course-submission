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
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  
 print_statistics(test, SIZE);
}

void print_statistics(unsigned char array[], unsigned int length){
	printf("Initial data:\n\n");
	print_array(array, length);
	sort_array(array, length);  //The function sorts the given data in ascending order
	printf("rearranged data:\n");
	print_array(array, length); //The function prints sorted data array 
	printf("Median of the data: %d\n", find_median(array, length)); //Finds & print median of data
	printf("Mean of the data: %d\n", find_mean(array, length));  //Find & print mean of the data
	printf("Maximum of the data: %d\n", find_max(array, length));  //Find & print maximum of the data
	printf("Minimum of the data: %d\n\n", find_min(array, length));	 //Find & print minimum of the data
	return;
}

void print_array(unsigned char array[], unsigned int length){
	for(int i = 0; i < length/8; i++){
		for(int j = 0; j < length/5; j++){
		       printf("%3d  ", array[8*i+j]);
		}
 		printf("\n");
	}
	
	printf("\n");	
	return;
}

unsigned char find_median(unsigned char array[], unsigned int length){
	return array[(length-1)/2];
}

unsigned char find_mean(unsigned char array[], unsigned int length){
	unsigned int sum = 0;
	for(int i = 0; i < length; i++){
		sum += array[i];	
	}

	return (unsigned char)( sum / length );
}

unsigned char find_max(unsigned char array[], unsigned int length){
	return array[length-1];
}

unsigned char find_min(unsigned char array[], unsigned int length){
	return array[0];
}

void sort_array(unsigned char array[], unsigned int length){
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
