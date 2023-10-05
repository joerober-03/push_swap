/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:08:26 by joerober          #+#    #+#             */
/*   Updated: 2023/01/11 11:35:09 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

int	doubles_check(int stack_a[], int lenght_a)
{
	int	i;
	int	j;
	int	trigger;

	trigger = 0;
	i = 0;
	while (i < lenght_a)
	{
		j = 0;
		while (j < lenght_a - 1)
		{
			if (i == j)
			j++;
			if (stack_a[i] == stack_a[j])
			{
				trigger++;
				return (trigger);
			}
			j++;
		}
		i++;
	}
	return (trigger);
}

int	order_check(int stack_a[], int lenght_a)
{
	int	i;
	int	trigger;

	trigger = 0;
	i = 0;
	if (lenght_a != 0)
	{
		while (i < lenght_a)
		{
			if (stack_a[i] > stack_a[i + 1])
			{
				trigger++;
				return (trigger);
			}
			i++;
		}
		i++;
	}
	return (trigger);
}

long	int_check(long argv)
{
	long	trigger;

	trigger = 0;
	if (argv > 2147483647 || argv < -2147483648)
		trigger++;
	return (trigger);
}

void	error_check(int stack_a[], int lenght_a)
{
	if (lenght_a > 1)
	{
		if (doubles_check(stack_a, lenght_a) != 0)
			ft_error();
		if (order_check(stack_a, lenght_a - 1) == 0)
			exit(0);
	}
}

void	algorithm(int argc, char **argv, int lenght_a, int lenght_b)
{
	int		*stack_a;
	int		*stack_b;

	stack_a = ft_calloc(lenght_a, sizeof(int));
	stack_b = ft_calloc(lenght_a, sizeof(int));
	if (argc == 2)
	{
		argc_2(argv, lenght_b, stack_a, stack_b);
		exit(0);
	}
	formating(argv, stack_a, lenght_a, 0);
	if (lenght_a > 0 && lenght_a <= 55)
	{
		if (lenght_a <= 8)
			small_stack(stack_a, stack_b, &lenght_a, &lenght_b);
		else
			insert_sort(stack_a, stack_b, &lenght_a, &lenght_b);
	}
	else if (lenght_a > 55)
	{
		radix_formating(stack_a, lenght_a);
		radix_sort(stack_a, stack_b, &lenght_a, &lenght_b);
	}
	free (stack_a);
	free (stack_b);
}
