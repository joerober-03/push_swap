/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:33:59 by joerober          #+#    #+#             */
/*   Updated: 2022/12/21 15:35:31 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

void	ra(int stack_a[], int lenght_a)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack_a[0];
	if (lenght_a != 0)
	{
		while (i != lenght_a - 1)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
		stack_a[i] = tmp;
	}
	ft_printf("ra\n");
}

void	rb(int stack_b[], int lenght_b)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack_b[0];
	if (lenght_b != 0)
	{
		while (i != lenght_b - 1)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
		stack_b[i] = tmp;
	}
	ft_printf("rb\n");
}

void	rr(int stack_a[], int stack_b[], int lenght_a, int lenght_b)
{
	ra(stack_a, lenght_a);
	rb(stack_b, lenght_b);
}
