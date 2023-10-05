/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:27:01 by joerober          #+#    #+#             */
/*   Updated: 2023/01/11 11:34:30 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

void	radix_sort(int stack_a[], int stack_b[], int *lenght_a, int *lenght_b)
{
	int	j;
	int	i;
	int	k;

	j = 0;
	i = *lenght_a;
	while (order_check(stack_a, *lenght_a - 1) != 0)
	{
		k = 0;
		while (k != i)
		{
			if (((stack_a[0] >> j) & 1) == 1)
				ra(stack_a, *lenght_a);
			else
				pb(stack_a, stack_b, lenght_a, lenght_b);
			k++;
		}
		while (*lenght_b != 0)
			pa(stack_a, stack_b, lenght_a, lenght_b);
		j++;
	}
}
