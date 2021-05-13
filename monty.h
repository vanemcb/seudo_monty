#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int n;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char **_token(char *str, char *sep);
char *_strdup(char *str);
char **read_m(char *file_name);
void call_function(stack_t **head, char *array_line, int num_lines);
char *_strtok(char *str, char *delim);
int cont_lines(char *buff, char delim);
char **read_line(char *file_name, int num_lines);
void push_func(stack_t **head, unsigned int num_lines);
void pall_func(stack_t **head, unsigned int num_lines);
void free_stactk(stack_t *head);
int _strlen(char *s);

#endif /* MONTY_H */
