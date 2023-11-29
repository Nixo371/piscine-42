/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:48:24 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/29 20:26:02 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char	*s1 = "String 1 es asi";
	char	*s2 = "String 2";
	char	*s3 = "String 2";
	char	*s4 = "String 14 es asi";

	char	*str1 = malloc(strlen(s1) + 1);
	char	*str2 = malloc(strlen(s2) + 1);
	char	*str3 = malloc(strlen(s3) + 1);
	char	*str4 = malloc(strlen(s4) + 1);

	strncpy(str1, s1, strlen(s1));
	strncpy(str2, s2, strlen(s2));
	strncpy(str3, s3, strlen(s3));
	strncpy(str4, s4, strlen(s4));

	printf("%d <=> %d\n", ft_strcmp(str1, str2), strcmp(str1, str2));
	printf("%d <=> %d\n", ft_strcmp(str1, str3), strcmp(str1, str3));
	printf("%d <=> %d\n", ft_strcmp(str1, str4), strcmp(str1, str4));
	printf("%d <=> %d\n", ft_strcmp(str2, str3), strcmp(str2, str3));
	printf("%d <=> %d\n", ft_strcmp(str2, str4), strcmp(str2, str4));
	printf("%d <=> %d\n", ft_strcmp(str3, str4), strcmp(str3, str4));
}
*/