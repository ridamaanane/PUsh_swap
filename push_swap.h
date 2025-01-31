#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_puthexa_l(unsigned long nb);
int	ft_puthexa_u(unsigned long nb);
int	ft_unsigned(unsigned int nb);
int	ft_ptrhandler(unsigned long nb);
int	ft_printf(const char *format, ...);

typedef struct list_s {
    int value;
    struct list_s *next;
} list_t;

void pa(list_t **stack_b, list_t **stack_a);
void pb(list_t **stack_a, list_t **stack_b);
void ra(list_t **stack_a);
void rb(list_t **stack_b);
void rr(list_t **stack_a, list_t **stack_b);
void rra(list_t **stack_a);
void rrb(list_t **stack_b);
void rrr(list_t **stack_a, list_t **stack_b);
void sa(list_t **stack_a);
void sb(list_t **stack_b);
void ss(list_t **stack_a, list_t **stack_b)


#endif 
