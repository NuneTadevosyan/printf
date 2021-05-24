/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntadevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 15:32:25 by ntadevos          #+#    #+#             */
/*   Updated: 2021/02/02 15:39:07 by ntadevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	int		i;

	i = 0;
	if (!s || ft_strlen(s) < start)
		len = 0;
	if (!(c = malloc(len + 1)))
		return (0);
	while (len-- && s[start + i])
	{
		c[i] = s[start + i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
