/**
 * @file 01stack_adt.c
 * @author vector(1719569290@qq.com)
 * @brief The abstract data type of the stack
 * @version V1.0.0
 * @date 2023-01-31
 *
 * @note ADT 栈(stack)
 *      Data
 *          同线性表。元素具有相同的类型，相邻元素具有前驱和后继关系
 *      Operation
 *          stack_init(*s);         初始化操作，建立一个空栈。
 *          stack_destroy(*s);      若栈存在，则销毁它。
 *          stack_clear(*s);        将栈清空。
 *          stack_empty(s);         若栈为空，返回true，否则返回false。
 *          stack_get_top(s, *e);   若栈存在且非空，用e返回s的栈顶元素。
 *          stack_push(*s, e);      若栈存在，插入新的元素e到栈s中并成为栈顶元素。
 *          stack_pop(*s, *e);      删除栈顶元素，并用e返回其值。
 *          stack_length(s);        返回栈s的元素个数。
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "01stack_adt.h"

bool stack_init(stack_t *s) {
    s->top = -1;
    return true;
}
bool stack_destroy(stack_t *s);
bool stack_clear(stack_t *s) {
    s->top = -1;
    return true;
}
bool stack_empty(stack_t s) {
    return s.top == -1 ? true : false;
}
bool stack_get_top(stack_t s, element_type *e) {
    if (s.top < 0) {
        return false;
    }
    *e = s.data[s.top];
    return true;
}

/**
 * @brief Stack pressed
 *
 * @param s Stack to be operated on
 * @param e Stack element to be pressed
 * @return true Stack pressed successfully
 * @return false Stack full load failed
 */
bool stack_push(stack_t *s, element_type e) {
    if (s->top == MAXSIZE - 1) {
        return false;
    }
    s->top++;
    s->data[s->top] = e;
    return true;
}

bool stack_pop(stack_t *s, element_type *e) {
    if (s->top == -1) {
        return false;
    }

    *e = s->data[s->top];
    s->top--;
    return true;
}

int stack_length(stack_t s) {
    return s.top + 1;
}