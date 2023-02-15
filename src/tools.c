/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:57:26 by otait-ta          #+#    #+#             */
/*   Updated: 2023/02/14 12:26:55 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

double	ft_atof(const char *str)
{
	double decimal;
	int power;
	int sign;

	decimal = ft_atoi(str);
	while (*str && *str != '.')
		str++;
	if (*str == '.')
		str++;
	power = 1;
	sign = 1;
	if (decimal < 0)
	{
		sign = -1;
		decimal *= -1;
	}
	while (*str && ft_isdigit(*str))
	{
		decimal = decimal * 10 + (*str - '0');
		str++;
		power *= 10;
	}
	return (sign * decimal / power);
}