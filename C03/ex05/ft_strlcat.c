/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:53:23 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/29 21:40:30 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (i == 0)
		return (-1);
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	ret;
	int	s;

	s = size;
	ret = 0;
	while (s-- && *dest != '\0')
	{
		dest++;
		ret++;
	}
	printf("s: %d\n", s);
	s = size - ret;
	if (s <= 0)
		return (ret + ft_strlen(src) + 1);
	ret += ft_strlen(src);
	while (*src && s-- > 1)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret + 1);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char	*s1 = "";
	char	*s2 = "";

	char	*dest;
	char	*src;

	int	size1 = strlen(s1);
	int	size2 = strlen(s2);
	int	test_size = 0;

	dest = malloc(size1 + size2);
	src = malloc(size2);
	strncpy(dest, s1, size1 + size2);
	strncpy(src, s2, size2);
	printf("%s - %u\n", dest, ft_strlcat(dest, src, test_size));
	free(dest);
	free(src);
	dest = malloc(size1 + size2);
	src = malloc(size2);
	strncpy(dest, s1, size1 + size2);
	strncpy(src, s2, size2);
	printf("%s - %lu\n", dest, strlcat(dest, src, test_size));
}
*/
