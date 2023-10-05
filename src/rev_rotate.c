/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:32:38 by joerober          #+#    #+#             */
/*   Updated: 2022/12/21 15:32:40 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(int stack_a[], int lenght_a)
{
	int	i;
	int	tmp;

	i = lenght_a;
	if (lenght_a != 0)
	{
		while (i != 0)
		{
			tmp = stack_a[lenght_a];
			stack_a[i] = stack_a[i - 1];
			i--;
		}
		stack_a[0] = tmp;
	}
	ft_printf("rra\n");
}

void	rrb(int stack_b[], int lenght_b)
{
	int	i;
	int	tmp;

	i = lenght_b;
	if (lenght_b != 0)
	{
		while (i != 0)
		{
			tmp = stack_b[lenght_b];
			stack_b[i] = stack_b[i - 1];
			i--;
		}
		stack_b[0] = tmp;
	}
	ft_printf("rrb\n");
}

void	rrr(int stack_a[], int stack_b[], int lenght_a, int lenght_b)
{
	rra(stack_a, lenght_a);
	rrb(stack_b, lenght_b);
}
