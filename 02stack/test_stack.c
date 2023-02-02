/**
 * @file test_stack.c
 * @author vector(171569290@qq.com)
 * @brief Test stack operation
 * @version V1.0.0
 * @date 2023-01-31
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "01stack_adt.h"
#include <stdio.h>

/**
 * @brief The application entry point.
 *
 * @param argc The number of arguments supplied to the main function
 * @param argv A pointer to an array of strings
 * @return int
 */
int main(int argc, char *argv[]) {
    stack_t s;
    element_type e;

    stack_init(&s);
    for (int i=0; i<10; i++) {
        stack_push(&s, (element_type)i);
    }
    printf("stack length: %d\n", stack_length(s));
    for (int i=0; i<10; i++) {
        stack_pop(&s, &e);
        printf("index:%d pop e:%d\n", i, e);
    }

    return 0;
}