/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:48:07 by slimane           #+#    #+#             */
/*   Updated: 2024/09/11 14:37:54 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**ft_sort(char **str)
{
	char	*p;
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				p = str[i];
				str[i] = str[j];
				str[j] = p;
			}
			j++;
		}
		i++;
	}
	return (str);
}

void	ft_printf_params(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int		i;

	i = 1;
	if (argc > 2)
	{
		ft_sort(argv);
		while (i < argc)
		{
			ft_printf_params(argv[i]);
			i++;
		}
	}
	else if (argc == 2)
	{
		ft_printf_params(argv[1]);
	}
}
