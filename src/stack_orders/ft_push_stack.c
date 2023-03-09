/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:47:06 by vicgarci          #+#    #+#             */
/*   Updated: 2023/03/09 19:25:08by vicgarci         ###   ########.fr       */
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
