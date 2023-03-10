/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_stack.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:50:00 by vicgarci          #+#    #+#             */
/*   Updated: 2023/03/10 17:05:49 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_reverse_rotate(t_list **stack)
{
	t_list	*last;

	if (stack && *stack && (*stack)->next)
	{
		last = *stack;
		while (last->next->next)
			last = last->next;
		ft_lstadd_front(stack, last->next);
		last->next = NULL;
	}
}
