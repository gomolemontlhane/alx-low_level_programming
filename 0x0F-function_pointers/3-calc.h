#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Task 1 - Function Prototype */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Task 2 - Function Prototype */
int int_index(int *array, int size, int (*cmp)(int));

/* Task 3 - Calculator Functions */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Task 3 - Function to Get Operator Function */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */

