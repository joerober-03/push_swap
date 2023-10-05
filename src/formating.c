/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formating.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:56:35 by joerober          #+#    #+#             */
/*   Updated: 2023/01/09 14:12:44 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(0);
}

int	*formating(char **argv, int stack_a[], int lenght_a, int j)
{	
	int	i;
	int	k;
	int	sign;

	sign = 1;
	i = 1;
	k = -1;
	while (i < lenght_a + 1)
	{
		k++;
		if (argv[i][k] == '-')
			sign = -1;
		else if (ft_isdigit(argv[i][k]) == 0 || int_check(atoi2(argv[i])) != 0)
			ft_error();
		else if (i < lenght_a + 1)
		{
			stack_a[j++] = ft_atoi(&argv[i++][k]);
			if (sign == -1)
				stack_a[j - 1] *= sign;
			sign = 1;
			k = -1;
		}
	}
	error_check(stack_a, lenght_a);
	return (stack_a);
}
