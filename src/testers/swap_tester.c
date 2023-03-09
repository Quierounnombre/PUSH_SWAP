/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_tester.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:54:34 by vicgarci          #+#    #+#             */
/*   Updated: 2023/03/09 19:01:05 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_bool	test_2(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (*stack && (*stack)->next)
	{
		first = *stack;
		second = (*stack)->next;
		ft_swap(stack);
		if (!(*stack == second && (*stack)->next == first))
			return (false);
	}
	return (true);
}

static t_bool	test_3(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (*stack && (*stack)->next)
	{
		first = *stack;
		second = (*stack)->next;
		third = second->next;
		ft_swap(stack);
		if (!(*stack == second && (*stack)->next == first))
			return (false);
		if (third != first->next)
			return (false);
	}
	return (true);
}

static t_bool	test_1(t_list **stack)
{
	ft_swap(stack);
	return (true);
}

static void	clean_test(t_list *stack)
{
	free(stack->next->next);
	free(stack->next);
	free(stack);
}

void	swap_tester(void)
{
	t_list	*stack;
	t_bool	flag;

	stack = ft_lstnew((void *)1);
	flag = false;
	if (!test_1(&stack))
	{
		ft_test_output(false, "Swap 1");
		flag = true;
	}
	ft_lstadd_back(&stack, ft_lstnew((void *)2));
	if (!test_2(&stack))
	{
		ft_test_output(false, "Swap 2");
		flag = true;
	}
	ft_lstadd_back(&stack, ft_lstnew((void *)3));
	if (!test_3(&stack))
	{
		ft_test_output(false, "Swap 3");
		flag = true;
	}
	clean_test(stack);
	if (!flag)
		ft_test_output(true, "SWAP");
}
