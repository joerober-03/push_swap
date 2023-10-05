/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:18:09 by joerober          #+#    #+#             */
/*   Updated: 2022/12/22 16:38:35 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(int stack_a[], int stack_b[], int *lenght_a, int *lenght_b)
{
	int	i;
	int	j;

	i = *lenght_a;
	j = *lenght_b;
	if (*lenght_b != 0)
	{
		while (i-- != 0)
			stack_a[i + 1] = stack_a[i];
		stack_a[0] = stack_b[0];
		i = 0;
		while (i != j)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
	}
	lenght_a[0]++;
	lenght_b[0]--;
	ft_printf("pa\n");
}

void	pb(int stack_a[], int stack_b[], int *lenght_a, int *lenght_b)
{
	int	i;
	int	j;

	i = *lenght_b;
	j = *lenght_a;
	if (*lenght_a != 0)
	{
		while (i-- != 0)
			stack_b[i + 1] = stack_b[i];
		stack_b[0] = stack_a[0];
		i = 0;
		while (i != j)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
	}
	lenght_a[0]--;
	lenght_b[0]++;
	ft_printf("pb\n");
}
