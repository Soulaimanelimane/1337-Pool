/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:23:05 by slimane           #+#    #+#             */
/*   Updated: 2024/08/29 16:43:50 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	f_char(char c )
{
	write(1, &c, 1);
}

void	fdiv(int a, int b )
{
	f_char((a / 10) + 48);
	f_char((a % 10) + 48);
	f_char(' ');
	f_char((b / 10) + 48);
	f_char((b % 10) + 48);
	if (a != 98)
	{
		f_char(',');
		f_char(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0 ;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			fdiv(x, y);
			y++;
		}
		x++;
	}
}
