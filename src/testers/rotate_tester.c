/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:01:12 by vicgarci          #+#    #+#             */
/*   Updated: 2023/03/10 15:57:38 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//test if does something whit a empty stack
static t_bool	test_1(t_list **stack)
{
	t_list	*first;

	first = *stack;
	ft_rotate(stack);
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
		ft_rotate(stack);
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
		ft_rotate(stack);
		if (*stack != second)
			return (false);
		if ((*stack)->next != third)
			return (false);
		if ((*stack)->next->next != first)
			return (false);
		if (first->next != NULL)
			return (false);
		return (true);
	}
	return (false);
}

void	rotate_tester(void)
{
	t_list	*stack;
	t_bool	flag;

	stack = ft_lstnew((void *)1);
	flag = true;
	if (!test_1(&stack))
	{
		ft_test_output(false, "Rotate 1");
		flag = false;
	}
	ft_lstadd_back(&stack, ft_lstnew((void *)2));
	if (!test_2(&stack))
	{
		ft_test_output(false, "Rotate 2");
		flag = false;
	}
	ft_lstadd_back(&stack, ft_lstnew((void *)3));
	if (!test_3(&stack))
	{
		ft_test_output(false, "Rotate 3");
		flag = false;
	}
	if (flag)
		ft_test_output(true, "ROTATE");
	ft_lstclear(&stack, NULL);
}
