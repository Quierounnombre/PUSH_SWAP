/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:35:37 by vicgarci          #+#    #+#             */
/*   Updated: 2023/03/08 14:44:00 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_list *stack)
{
	t_list	*next_stack;
	t_list	*temp;

	if (stack && stack->next)
	{
		next_stack = stack->next;
		if (next_stack->next)
			stack = next_stack->next;
		temp = next_stack;
		next_stack = stack;
		stack = temp;
	}
}
