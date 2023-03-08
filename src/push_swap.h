/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:25:55 by vicgarci          #+#    #+#             */
/*   Updated: 2023/03/08 15:41:16 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft_def/libftprintf.h"

# ifndef TESTER
#  define TESTER 0
# endif

/*----ORDERS----*/
void	ft_swap(t_list *stack);

/*----TESTERS----*/
void	push_swap_tester(void);
void	swap_tester(void);
#endif