/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:11:16 by pwaters           #+#    #+#             */
/*   Updated: 2021/12/09 12:07:24 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	uc;
	char			*ptr;

	i = 0;
	uc = (unsigned char)c;
	ptr = (char *)b;
	while (i < len)
	{
		*(ptr + i) = uc;
		i++;
	}
	return (b);
}
