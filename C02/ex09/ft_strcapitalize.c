/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:44:27 by slimane           #+#    #+#             */
/*   Updated: 2024/09/01 14:50:14 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_convert_all_to_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	index;

	i = 0;
	index = 1;
	ft_convert_all_to_lowercase(str);
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (index)
			{
				str[i] -= 32;
				index = 0;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
			index = 0;
		else
			index = 1;
		i++;
	}
	return (str);
}
