/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:33:55 by otait-ta          #+#    #+#             */
/*   Updated: 2023/02/14 12:31:45 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libft/libft.h"
# include <math.h>
# include <mlx.h>
# include <stdio.h>

struct						s_img_data
{
	void					*img;
	char					*addr;
	int						bpp;
	int						size_line;
	int						endian;
};

struct						s_mlx
{
	void					*mlx_ptr;
	void					*win_ptr;
};
struct						s_coordinates
{
	double					minRe;
	double					maxRe;
	double					minIm;
	double					maxIm;
	double					factorRe;
	double					factorIm;
};
typedef struct s_info
{
	int						ac;
	char					**av;
	int						width;
	int						height;
	int						max_iterations;
	double					c_re;
	double					c_im;
	double					zoomX;
	struct s_mlx			mlx;
	struct s_img_data		img_data;
	struct s_coordinates	coordinates;
}							t_info;
void						verify_arg(t_info *info);
void						print_and_exit(char *d);
int							ft_strcmp(const char *s1, const char *s2);
double						ft_atof(const char *str);
void						is_less_than_tow(char *av);
void						initialize_mlx(t_info *info);

#endif