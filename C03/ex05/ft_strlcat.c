/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:23:07 by slimane           #+#    #+#             */
/*   Updated: 2024/09/07 20:54:10 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_length(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

unsigned int ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int lens = ft_length((char *)src);
	unsigned int lend = ft_length(dest);
	unsigned int i = 0;
	unsigned int j = lend;

	if (size == 0)
		return lens;

	if (size <= lend)
		return size + lens;

	while (src[i] && (lend + i) < (size - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}

	dest[j] = '\0';

	return lend + lens;
}