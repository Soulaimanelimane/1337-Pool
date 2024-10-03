/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:18:02 by slimane           #+#    #+#             */
/*   Updated: 2024/09/17 15:11:12 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcat( char *dest, char *src)
{
	int len;
	int i;
	len = ft_len(dest);
	i = 0;
	while(src[i])
	{
		dest[len] = src[i];
		i++;
		len++;
	}

}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*pstr;
	int		full_len;
	int		i;

	i = 0;
	full_len = 0;
	pstr = "";
	if (size > 0)
	{
		while (i < size)
		{
			full_len += ft_len(strs[i]);
			i++;
		}
		full_len += (ft_len(sep) * (size - 1)) + 1;
		pstr = malloc(full_len);
		i = 0;
		while (i < size)
		{
			ft_strcat(pstr, strs[i]);
			ft_strcat(pstr, sep);
			i++;
		}
		pstr[full_len-1] = '\0';
	}
	return (pstr);
}