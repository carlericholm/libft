/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:37:23 by cholm             #+#    #+#             */
/*   Updated: 2018/03/13 21:12:05 by cholm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	str[size] = '\0';
	ft_bzero(str, size);
	return (str);
}
