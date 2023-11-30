/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:53:23 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/30 18:26:17 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	if ((int)size < ft_strlen(dest))
		return (size + ft_strlen(src));
	while (dest[i] && i < size - 1)
		i++;
	while (src[j] && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
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
