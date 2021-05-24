/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntadevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 12:49:19 by ntadevos          #+#    #+#             */
/*   Updated: 2021/02/03 11:44:59 by ntadevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *src, size_t size)
{
	void *res;

	if (!d && !src)
		return (0);
	res = d;
	while (size--)
		*(char*)d++ = *(char*)src++;
	return (res);
}
