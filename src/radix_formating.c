/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_formating.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:22:47 by joerober          #+#    #+#             */
/*   Updated: 2023/01/11 11:42:45 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

int	get_index(char *temp, int *array, int lenght_a)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	while (temp[i] == 'a')
		i++;
	index = i;
	i = -1;
	while (i++ != lenght_a - 1)
	{
		if (temp[i] == 'a')
			;
		else if (array[i] < array[index])
			index = i;
	}
	return (index);
}

int	*radix_formating(int stack_a[], int lenght_a)
{
	int		j;
	int		index;
	char	*temp;
	int		*array;

	temp = ft_calloc(lenght_a, sizeof(char));
	array = ft_calloc(lenght_a, sizeof(int));
	j = 0;
	while (j != lenght_a)
	{
		temp[j] = *ft_itoa(stack_a[j]);
		array[j] = stack_a[j];
		j++;
	}
	j = 0;
	while (j != lenght_a)
	{
		index = get_index(temp, array, lenght_a);
		stack_a[index] = j++;
		temp[index] = 'a';
	}
	free(array);
	free(temp);
	return (stack_a);
}
