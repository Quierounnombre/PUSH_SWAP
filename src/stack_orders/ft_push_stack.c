/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:00:32 by vicgarci          #+#    #+#             */
/*   Updated: 2023/03/10 15:00:38 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_list **target, t_list **destiny)
{
	t_list	*temp;

	if (*target && destiny)
	{
		temp = (*target)->next;
		ft_lstadd_front(destiny, *target);
		*target = temp;
	}
}
