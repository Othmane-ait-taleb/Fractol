/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:44:55 by otait-ta          #+#    #+#             */
/*   Updated: 2023/02/14 12:32:10 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	julia_init(t_info *info)
{
	info->coordinates.minRe = -2.0;
	info->coordinates.maxRe = 2.0;
	info->coordinates.minIm = -2.0;
	info->coordinates.maxIm = 2.0;
	info->coordinates.factorRe = (info->coordinates.maxRe
			- info->coordinates.minRe) / (info->width - 1);
	info->coordinates.factorIm = (info->coordinates.maxIm
			- info->coordinates.minIm) / (info->height - 1);
	if (info->ac == 2)
	{
		info->c_re = -0.835;
		info->c_im = -0.2321;
	}
	else
	{
		info->c_re = ft_atof(info->av[2]);
		info->c_im = ft_atof(info->av[3]);
	}
	info->zoomX = 1;
}
