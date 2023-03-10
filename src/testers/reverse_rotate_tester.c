/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_tester.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:30:40 by vicgarci          #+#    #+#             */
/*   Updated: 2023/03/10 17:07:28 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Test if it break whit a empty stack
static t_bool	test_1(t_list **stack)
{
	t_list	*first;

	first = *stack;
	ft_reverse_rotate(stack);
	if (*stack != first)
		return (false);
	return (true);
}

//test if it can rotate
static t_bool	test_2(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (*stack && (*stack)->next)
	{
		first = *stack;
		second = (*stack)->next;
		ft_reverse_rotate(stack);
		if (*stack != second)
			return (false);
		if ((*stack)->next != first)
			return (false);
		if ((*stack)->next->next != NULL)
			return (false);
		return (true);
	}
	return (false);
}

//Check if it lose references when rotate a big stack
static t_bool	test_3(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (*stack && (*stack)->next && (*stack)->next->next)
	{
		first = *stack;
		second = (*stack)->next;
		third = (*stack)->next->next;
		ft_reverse_rotate(stack);
		if (*stack != third)
			return (false);
		if ((*stack)->next != first)
			return (false);
		if ((*stack)->next->next != second)
			return (false);
		if (second->next != NULL)
			return (false);
		return (true);
	}
	return (false);
}

void	reverse_rotate_tester(void)
{
	t_list	*stack;
	t_bool	flag;

	flag = true;
	stack = ft_lstnew((void *)1);
	if (!test_1(&stack))
	{
		ft_test_output(false, "Reverse_rotate 1");
		flag = false;
	}
	ft_lstadd_back(&stack, ft_lstnew((void *)2));
	if (!test_2(&stack))
	{
		ft_test_output(false, "Reverse_rotate 2");
		flag = false;
	}
	ft_lstadd_back(&stack, ft_lstnew((void *)3));
	if (!test_3(&stack))
	{
		ft_test_output(false, "Reverse_rotate 3");
		flag = false;
	}
	ft_lstclear(&stack, free);
	if (flag)
		ft_test_output(true, "REVERSE_ROTATE");
}
