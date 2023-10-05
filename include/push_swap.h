/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:24:25 by joerober          #+#    #+#             */
/*   Updated: 2023/01/10 09:37:54 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"

void	sa(int stack_a[]);
void	sb(int stack_b[]);
void	ss(int stack_a[], int stack_b[]);
void	pa(int stack_a[], int stack_b[], int *lenght_a, int *lenght_b);
void	pb(int stack_a[], int stack_b[], int *lenght_a, int *lenght_b);
void	ra(int stack_a[], int lenght_a);
void	rb(int stack_b[], int lenght_b);
void	rr(int stack_a[], int stack_b[], int lenght_a, int lenght_b);
void	rra(int stack_a[], int lenght_a);
void	rrb(int stack_b[], int lenght_b);
void	rrr(int stack_a[], int stack_b[], int lenght_a, int lenght_b);
void	insert_sort(int stack_a[], int stack_b[], int *lenght_a, int *lenght_b);
int		order_check(int stack_a[], int lenght_a);
int		doubles_check(int stack_a[], int lenght_a);
void	error_check(int stack_a[], int lenght_a);
int		*formating(char **argv, int stack_a[], int lenght_a, int j);
int		*separation(char **str, int stack_a[]);
int		separation_lenght(char **str, int stack_a[]);
int		argv_lenght(char **argv);
char	**split_argv(char **argv);
void	spliting(int stack_a[], int stack_b[], int lenght_a, int lenght_b);
int		*radix_formating(int stack_a[], int lenght_a);
void	radix_sort(int stack_a[], int stack_b[], int *lenght_a, int *lenght_b);
void	small_stack(int sa[], int sb[], int *la, int *lb);
void	algorithm(int argc, char **argv, int lenght_a, int lenght_b);
void	digit_test(char **argv, int lenght_a);
void	argc_2(char **argv, int lenght_b, int stack_a[], int stack_b[]);
void	ft_error(void);
void	error_check_2(char **argv, int stack_a[], int lenght_a, int j);
long	int_check(long argv);
long	atoi2(const char *str);

#endif
