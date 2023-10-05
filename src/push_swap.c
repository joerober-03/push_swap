/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:37:01 by joerober          #+#    #+#             */
/*   Updated: 2022/12/21 14:37:44 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	int	lenght_a;
	int	lenght_b;

	lenght_a = argc - 1;
	lenght_b = 0;
	if (argc == 1)
		return (0);
	algorithm(argc, argv, lenght_a, lenght_b);
	return (0);
}
