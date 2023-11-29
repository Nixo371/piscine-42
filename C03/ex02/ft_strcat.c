/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:18:24 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/29 20:26:49 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
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

	dest = malloc(size1 + size2);
	src = malloc(size1 + size2);
	strncpy(dest, s1, size1 + size2);
	strncpy(src, s2, size1 + size2);
	printf("%s\n", ft_strcat(dest, src));
	free(dest);
	free(src);
	dest = malloc(size1 + size2);
	src = malloc(size1 + size2);
	strncpy(dest, s1, size1 + size2);
	strncpy(src, s2, size1 + size2);
	printf("%s\n", strcat(dest, src));
}
*/
