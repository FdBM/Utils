/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-barr <fde-barr@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 21:32:05 by fde-barr          #+#    #+#             */
/*   Updated: 2021/02/19 21:32:15 by fde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	size_t	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		a;
	int		b;
	int		i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	a = ft_strlen((char *)s1);
	b = ft_strlen((char *)s2);
	if (NULL == (s = (char *)malloc((a + b + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
	{
		s[i] = s1[i];
	}
	a = 0;
	while (s2[a] != '\0')
	{
		s[i] = s2[a];
		i++;
		a++;
	}
	s[i] = '\0';
	return (s);
}
