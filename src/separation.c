/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:35:59 by joerober          #+#    #+#             */
/*   Updated: 2023/01/08 11:10:30 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

long	atoi2(const char *str)
{
	long	res;
	long	sign;
	long	i;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

char	**split_argv(char **argv)
{
	char	*p;
	int		i;
	int		len;

	i = 1;
	p = argv[1];
	while (*p != '\0')
	{
		if (*p == ' ')
		{
			*p = '\0';
			i++;
			p++;
			argv[i] = p;
		}
		else
		{
			p++;
		}
	}
	len = i;
	return (argv);
}

int	argv_lenght(char **argv)
{
	char	*p;
	int		i;
	int		len;

	i = 1;
	p = argv[1];
	while (*p != '\0')
	{
		if (*p == ' ')
		{
			i++;
			p++;
		}
		else
		{
			p++;
		}
	}
	len = i;
	return (len);
}

void	argc_2(char **argv, int lenght_b, int stack_a[], int stack_b[])
{
	int		lenght_a;
	char	**temp;

	lenght_a = argv_lenght(argv);
	temp = ft_calloc(ft_strlen(argv[1]) + 1, sizeof(char *));
	temp[1] = argv[1];
	temp = split_argv(temp);
	stack_a = ft_calloc(lenght_a, sizeof(int));
	stack_b = ft_calloc(lenght_a, sizeof(int));
	formating(temp, stack_a, lenght_a, 0);
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
	free (temp);
}
