/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvasylie <hvasylie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 15:37:02 by bbekmama          #+#    #+#             */
/*   Updated: 2019/07/24 21:26:50 by hvasylie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print(t_tetr *head)
{
	int line;
	int i;

	line = 0;
	while (head != NULL)
	{
		i = 0;
		while ((head->str[i]))
		{
			if (head->str[i] == '#')
				ft_putchar('A' + head->num);
			else
				ft_putchar('.');
			if (i % 4 == 3)
				ft_putstr("\n");
			i++;
		}
		ft_putstr("\n");
		head = head->next;
	}
}
