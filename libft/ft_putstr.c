/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchoi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 17:22:43 by kchoi             #+#    #+#             */
/*   Updated: 2020/10/27 17:23:41 by kchoi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s)
{
	size_t	i;

	i = 0;
	write (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

