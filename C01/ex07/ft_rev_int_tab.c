/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:11:16 by slimane           #+#    #+#             */
/*   Updated: 2024/08/29 19:25:35 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	tl;

	i = 0;
	tl = size -1 ;
	while (i < size /2  )
	{
		tmp = tab[i];
		tab[i] = tab[tl];
		tab[tl] = tmp;
		i++;
		tl--;
	}
}
