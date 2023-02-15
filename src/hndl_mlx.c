/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hndl_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:15:13 by otait-ta          #+#    #+#             */
/*   Updated: 2023/02/13 15:39:44 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	initialize_mlx(t_info *info)
{
	info->width = 1200;
	info->height = 800;
	info->mlx.mlx_ptr = mlx_init();
	info->mlx.win_ptr = mlx_new_window(info->mlx.mlx_ptr, info->width,
			info->height, "Fractol");
	info->img_data.img = mlx_new_image(info->mlx.mlx_ptr, info->width,
			info->height);
	info->img_data.addr = mlx_get_data_addr(info->img_data.img,
											&info->img_data.bpp,
											&info->img_data.size_line,
											&info->img_data.endian);
}