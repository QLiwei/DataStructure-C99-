/**
 * @file 01stack_adt.h
 * @author vector(1719569290@qq.com)
 * @brief Header file for the abstract data type of the stack
 * @version V1.0.0
 * @date 2023-01-31
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __01STACK_ADT_H__
#define __01STACK_ADT_H__

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
#define MAXSIZE 10

typedef int element_type;
typedef struct {
    element_type data[MAXSIZE];
    int top;
}stack_t;

bool stack_init(stack_t *s);
bool stack_destroy(stack_t *s);
bool stack_clear(stack_t *s);
bool stack_empty(stack_t s);
bool stack_get_top(stack_t s, element_type *e);
bool stack_push(stack_t *s, element_type e);
bool stack_pop(stack_t *s, element_type *e);
int stack_length(stack_t s);

#ifdef __cplusplus
}
#endif

#endif /* __01STACK_ADT_H__ */