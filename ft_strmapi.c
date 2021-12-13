/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pawaters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:58:16 by pawaters          #+#    #+#             */
/*   Updated: 2021/12/01 12:26:23 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res || !s)
		return (0);
	while (i < len)
	{	
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
