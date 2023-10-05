/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:39:36 by joerober          #+#    #+#             */
/*   Updated: 2023/01/09 14:10:44 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	man(int stack_a[], int lenght_a)
{
	sa(stack_a);
	rra(stack_a, lenght_a);
}

void	man2(int stack_a[], int lenght_a)
{
	sa(stack_a);
	ra(stack_a, lenght_a);
}

void	ft_small_nums(int stack_a[], int lenght_a)
{
	if (lenght_a == 1)
		exit(0);
	else if (lenght_a == 2 && order_check(stack_a, lenght_a) != 0)
		sa(stack_a);
	exit(0);
}

void	small_stack(int s_a[], int sb[], int *la, int *lb)
{
	if (*la < 3)
		ft_small_nums(s_a, *la);
	while ((order_check(s_a, *la - 1) != 0 || *lb != 0))
	{
		if (s_a[0] > s_a[1] && s_a[0] > s_a[*la - 1] && s_a[1] < s_a[*la - 1])
			ra(s_a, *la);
		else if (s_a[0] > s_a[1] && s_a[0] > s_a[*la - 1])
			man(s_a, *la);
		else if (s_a[0] > s_a[1] && s_a[0] > s_a[*la - 1])
			rra(s_a, *la);
		else if (s_a[0] > s_a[1] && s_a[0] < s_a[*la - 1])
			sa(s_a);
		else if (s_a[0] < s_a[1] && s_a[0] < s_a[*la - 1]
			&& s_a[1] > s_a[*la - 1])
			man2(s_a, *la);
		else if (s_a[0] < s_a[1] && s_a[0] < s_a[*la - 1])
		{
			if (order_check(s_a, *la - 1) != 0)
				pb(s_a, sb, la, lb);
			else if (order_check(s_a, *la - 1) == 0)
				pa(s_a, sb, la, lb);
		}
		else if (s_a[0] < s_a[1] && s_a[0] > s_a[*la - 1])
			rra(s_a, *la);
	}
}
