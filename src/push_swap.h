/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:25:55 by vicgarci          #+#    #+#             */
/*   Updated: 2023/03/10 16:59:59 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft_def/libftprintf.h"

# ifndef TESTER
#  define TESTER 0
# endif

/*----ORDERS----*/

void	ft_swap(t_list **stack);
void	ft_push(t_list **target, t_list **destiny);
void	ft_rotate(t_list **stack);
void	ft_reverse_rotate(t_list **stack);

/*----TESTERS----*/

void	ft_test_output(t_bool result, char *s);
void	push_swap_tester(void);
void	swap_tester(void);
void	push_tester(void);
void	rotate_tester(void);
void	reverse_rotate_tester(void);

#endif