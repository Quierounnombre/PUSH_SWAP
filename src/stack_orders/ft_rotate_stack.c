/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:06:40 by vicgarci          #+#    #+#             */
/*   Updated: 2023/03/10 16:04:06 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_list **stack)
{
	t_list	*first_elem;

	if (stack && *stack && (*stack)->next)
	{
		first_elem = *stack;
		*stack = first_elem->next;
		first_elem->next = NULL;
		ft_lstadd_back(stack, first_elem);
	}
}
