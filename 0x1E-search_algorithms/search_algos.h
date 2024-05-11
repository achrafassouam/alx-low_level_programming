#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

/* HEADERS */
#include <stdio.h>
#include <stdlib.h>


/* PROTOTYPES  */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int _binary_search(int *array, size_t size, int value);

#endif
