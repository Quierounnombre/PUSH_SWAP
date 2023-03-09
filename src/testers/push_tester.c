/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_tester.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:10:45 by vicgarci          #+#    #+#             */
/*   Updated: 2023/03/09 20:05:28 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Comprueba si hace un cambio con el stack vacio
static t_bool	test_1(t_list **target, t_list **destiny)
{
	ft_push(target, destiny);
	if ((*target))
		return (false);
	return (true);
}

//Comprueba si vacia el stack y lo mueve al otro stack
static t_bool	test_2(t_list **target, t_list **destiny)
{
	t_list	*start;

	start = *destiny;
	ft_push(target, destiny);
	if (*target)
		return (false);
	if ((*destiny)->next != start)
		return (false);
	return (true);
}

//Comprueba si el stack a no pierde la referencia
static t_bool	test_3(t_list **target, t_list **destiny)
{
	t_list	*next_target;

	next_target = (*target)->next;
	ft_push(target, destiny);
	if (*target != next_target)
		return (false);
	return (true);
}

static void	tests(t_list **target, t_list **destiny, t_bool *flag)
{
	*destiny = ft_lstnew((void *)1);
	*target = NULL;
	if (!test_1(target, destiny))
	{
		*flag = false;
		ft_test_output(false, "Push 1");
	}
	*target = ft_lstnew((void *)2);
	if (!test_2(target, destiny))
	{
		*flag = false;
		ft_test_output(false, "Push 2");
	}
	*target = ft_lstnew((void *)2);
	ft_lstadd_front(target, ft_lstnew((void *)3));
	if (!test_3(target, destiny))
	{
		*flag = false;
		ft_test_output(false, "Push 3");
	}
	ft_lstclear(destiny, NULL);
	ft_lstclear(target, NULL);
}

void	push_tester(void)
{
	t_list	*target;
	t_list	*destiny;
	t_bool	flag;

	flag = true;
	tests(&target, &destiny, &flag);
	if (flag)
		ft_test_output(true, "PUSH");
}
