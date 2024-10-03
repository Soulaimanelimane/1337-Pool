/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:08:41 by slimane           #+#    #+#             */
/*   Updated: 2024/09/16 11:14:24 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*pi;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	range = max - min;
	pi = malloc(range * 4);
	if (!pi)
		return (NULL);
	while (i < range)
	{
		pi[i] = min;
		i++;
		min++;
	}
	return (pi);
}
