/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:15:21 by joerober          #+#    #+#             */
/*   Updated: 2022/12/22 16:37:08 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_idk(int stack_a[], int *lenght_a, int index)
{
	if (*lenght_a > 1)
	{
		if (index < (*lenght_a / 2))
		{
			while (index != 0)
			{
				ra(stack_a, *lenght_a);
				index--;
			}
		}
		else
		{
			while (index != *lenght_a)
			{
				rra(stack_a, *lenght_a);
				index++;
			}
		}
	}
	return (index);
}

void	ft_idk2(int stack_a[], int stack_b[], int *lenght_a, int *lenght_b)
{
	int	j;

	j = *lenght_b;
	while (j != 0)
	{
		pa(stack_a, stack_b, lenght_a, lenght_b);
		j--;
	}
}

void	insert_sort(int stack_a[], int stack_b[], int *lenght_a, int *lenght_b)
{
	int	stock;
	int	index;
	int	i;

	while (*lenght_a != 0)
	{
		index = 0;
		stock = stack_a[0];
		i = 0;
		while (i < *lenght_a)
		{
			if (stack_a[i] < stock)
			{
				index = i;
				stock = stack_a[i];
			}
			i++;
		}
		index = ft_idk(stack_a, lenght_a, index);
		pb(stack_a, stack_b, lenght_a, lenght_b);
	}
	ft_idk2(stack_a, stack_b, lenght_a, lenght_b);
}
