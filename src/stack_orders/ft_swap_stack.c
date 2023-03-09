/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:35:37 by vicgarci          #+#    #+#             */
/*   Updated: 2023/03/09 17:53:16 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_list **stack)
{
	t_list	*next_in_lst;
	t_list	*temp;

	if (*stack && (*stack)->next)
	{
		next_in_lst = (*stack)->next->next;
		temp = *stack;
		*stack = (*stack)->next;
		temp->next = next_in_lst;
		(*stack)->next = temp;
	}
}
