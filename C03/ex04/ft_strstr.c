/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:40:27 by slimane           #+#    #+#             */
/*   Updated: 2024/09/07 20:48:42 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*founded;

	i = 0 ;
	if (ft_length(to_find) == 0)
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			founded = &str[i];
			while (str[i + j] == to_find[j])
			{
				if (!to_find[j + 1])
					return (founded);
				j++;
			}
		}
		i++;
	}
	return (0);
}
