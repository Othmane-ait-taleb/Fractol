/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_helpers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:36:49 by otait-ta          #+#    #+#             */
/*   Updated: 2023/02/14 14:49:14 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	verify_arg(t_info *info)
{
	if (info->ac >= 2)
	{
		if (ft_strcmp(info->av[1], "julia") == 0 && (info->ac == 4
				|| info->ac == 2))
		{
			if (info->ac == 4)
			{
				ft_atof(info->av[2]);
				is_less_than_tow(info->av[3]);
			}
			initialize_mlx(info);
		}
		// mandelbro stars here
		else if (ft_strcmp(info->av[1], "mandelbrot") == 0 && info->ac == 2)
		{
			initialize_mlx(info);
		}
	}
	else
		print_and_exit("d");
}

void	print_and_exit(char *d)
{
	if (*d == 'd')
		ft_putstr_fd("Error can you Enter mandelbrot or julia pleas ?\n", 2);
	else
		ft_putstr_fd(d, 2);
	exit(0);
}

void	is_less_than_tow(char *av)
{
	int i;

	i = 0;
	if (av[i] == '+' || av[i] == '-')
		i++;
	if (av[i] == '2' && av[i + 1] != '\0')
		print_and_exit(" You can't enter comma after 2");
	if (av[i] != '0' && av[i] != '1')
		print_and_exit("Enter a number between 2 and - 1");
	if (av[++i] == '\0')
		return ;
	if (av[i] == '.')
	{
		while (av[++i] != '\0')
			if (!ft_isdigit(av[i]))
				print_and_exit("Number after comma must be a number");
	}
}