/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:34:58 by slimane           #+#    #+#             */
/*   Updated: 2024/09/09 14:24:02 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_char(char *str, char c)
{
	int	i;
	int	count_char;

	i = 0;
	count_char = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			count_char++;
		}
		i++;
	}
	return (count_char);
}

int	check_errors(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (check_char(str, str[i]) > 1)
		{
			return (0);
		}
		else if (str[i] == 45 || str[i] == 43 || str[i] == 32)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	long n ;

	n = nbr;
	if (check_errors(base))
	{
		i = 0;
		if (n < 0)
		{
			n *= -1;
			write(1,"-",1);
		}
		while (base[i])
			i++;
		if (i <= 1)
			return ;
		if (n / i >= 1)
			ft_putnbr_base(n / i, base);
		write(1, &base[n % i], 1);
	}
	else
		return ;
}

