/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:53:37 by joerober          #+#    #+#             */
/*   Updated: 2022/12/21 15:53:51 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(int stack_a[])
{
	int	tmp;

	tmp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = tmp;
	ft_printf("sa\n");
}

void	sb(int stack_b[])
{
	int	tmp;

	tmp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = tmp;
	ft_printf("sb\n");
}

void	ss(int stack_a[], int stack_b[])
{
	sa(stack_a);
	sb(stack_b);
}
