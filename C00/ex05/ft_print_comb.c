/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:47:45 by slimane           #+#    #+#             */
/*   Updated: 2024/08/29 16:18:59 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c )
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	while (i < 56)
	{
		j = i + 1;
		while (j < 57)
		{
			k = j + 1;
			while (k < 58)
			{
				ft_putchar(i, j, k);
				if (i != 55)
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
