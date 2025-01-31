#include "push_swap.h"

void pa(list_t **stack_b, list_t **stack_a)
{
	if (!*stack_b)
        return;

    list_t *temp;

    temp = *stack_b;
    *stack_b = (*stack_b)->next;
    temp->next = *stack_a;
    *stack_a = temp;

    ft_printf("pa\n");
}
void pb(list_t **stack_a, list_t **stack_b)
{
	if (!*stack_a)
		return ;

	list_t *temp;

	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = *stack_b;
	*stack_b = temp; //updates stack_b to make temp the new head. ..
    //(katgol lih dir liya *stack_b ypointe 3la ayy haja kaypointe 3liha temp)

    ft_printf("pb\n");
}
void ra(list_t **stack_a)
{
    if (!*stack_a || (*stack_a)->next == NULL)
		return ;

    list_t *temp;
    list_t *end;

    temp = *stack_a;
    *stack_a = (*stack_a)->next;

    end = *stack_a;
    while(end->next != NULL)
    {
        end = end->next;
    }
    end->next = temp;
    temp->next = NULL;

    ft_printf("ra\n");
}
void rb(list_t **stack_b)
{
    if (!*stack_b || (*stack_b)->next == NULL)
		return ;

    list_t *temp;
    list_t *end;

    temp = *stack_b;
    *stack_b = (*stack_b)->next;

    end = *stack_b;
    while(end->next != NULL)
    {
        end = end->next;
    }
    end->next = temp;
    temp->next = NULL;

    ft_printf("rb\n");
}
void rr(list_t **stack_a, list_t **stack_b)
{
   ra(stack_a);
   rb(stack_b);

   ft_printf("rr\n");
}

void rra(list_t **stack_a)
{
    if (!*stack_a || (*stack_a)->next == NULL)
		return ;

    list_t *temp;
    list_t *before_last;
    list_t *last;

    
    temp = *stack_a;
    while (temp->next->next != NULL)
        temp = temp->next;

    before_last = temp;
    last = before_last->next;
    before_last->next = NULL;

    last->next = *stack_a;
    *stack_a = last;

    ft_printf("rra\n");
}
void rrb(list_t **stack_b)
{
    if (!*stack_b || (*stack_b)->next == NULL)
        return;

    list_t *temp;
    list_t *before_last;
    list_t *last;

    temp = *stack_b;
    while(temp->next->next != NULL)
        temp = temp->next;

    before_last = temp;
    last = before_last->next;
    before_last->next = NULL;

    last->next = *stack_b;
    *stack_b = last;

    ft_printf("rrb\n");
}
void rrr(list_t **stack_a, list_t **stack_b)
{
   rra(stack_a);
   rrb(stack_b);

   ft_printf("rrr\n");
}

void sa(list_t **stack_a)
{
    if (!*stack_a || (*stack_a)->next == NULL)
        return;
    list_t *first;
    list_t *second;

    first = *stack_a;
    second = (*stack_a)->next;

    first->next = second->next;
    second->next = first;

    *stack_a = second;

    ft_printf("sa\n");
}

void sb(list_t **stack_b)
{
    if (!*stack_b || (*stack_b)->next == NULL)
        return;

    list_t *first;
    list_t *second;

    first = *stack_b;
    second = (*stack_b)->next;

    first->next = second->next;
    second->next = first;

    *stack_b = second;

    ft_printf("sb\n");
}
void ss(list_t **stack_a, list_t **stack_b)
{
    sa(stack_a);
    sb(stack_b);

    ft_printf("ss\n");
}

int main() {
    list_t *stack_a = malloc(sizeof(list_t));
    list_t *n1 = malloc(sizeof(list_t));
    list_t *n2 = malloc(sizeof(list_t));

    stack_a->value = 3;
    stack_a->next = n1;

    n1->value = 2;
    n1->next = n2;

    n2->value = 1;
    n2->next = NULL;

    printf("Before rra():\n");
    list_t *temp = stack_a;
    while (temp) {
        printf("stack_a: %d\n", temp->value);
        temp = temp->next;
    }
    
    sb(&stack_a);

    printf("\nAfter rra():\n");

    temp = stack_a;
    while (temp) {
        printf("%d\n", temp->value);
        temp = temp->next;
    }
    return 0;
}
