/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:53:23 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/29 20:25:39 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_str(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s2 == '\0')
			return (1);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (!to_find[0])
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (ft_check_str(str, to_find))
				return (str);
		}
		str++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char	*s1 = ""; // haystack
	char	*s2 = ""; // needle

	char	*haystack;
	char	*needle;

	int	size1 = strlen(s1);
	int	size2 = strlen(s2);

	haystack = malloc(size1);
	needle = malloc(size2);
	strncpy(haystack, s1, size1);
	strncpy(needle, s2, size2);
	printf("%s\n", ft_strstr(haystack, needle));
	free(haystack);
	free(needle);
	haystack = malloc(size1);
	needle = malloc(size2);
	strncpy(haystack, s1, size1);
	strncpy(needle, s2, size2);
	printf("%s\n", strstr(haystack, needle));
}
*/
