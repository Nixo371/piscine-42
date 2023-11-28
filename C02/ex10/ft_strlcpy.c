/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:36:57 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/28 18:58:32 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] && size > 1)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	if (size)
		dest[i] = '\0';
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char	*s1 = "Esta tiene el tamaño correcto";
	char	*s2 = "Esta se va a truncar <- aqui";
	char	*s3 = "Esta tiene 7 de mas de size";

	int	size1 = strlen(s1);
	int	size2 = strlen(s2) - 7;
	int	size3 = strlen(s3) + 7;

	char	*str1 = malloc(size1 + 1);
	char	*str2 = malloc(size2 + 1);
	char	*str3 = malloc(size3 + 1);

	ft_strlcpy(str1, s1, size1 + 1);
	ft_strlcpy(str2, s2, size2 + 1);
	ft_strlcpy(str3, s3, size3 + 1);

	printf("%s - str1\n", str1);
	printf("%s - str2\n", str2);
	printf("%s - str3\n", str3);

	printf("\n");
	
	strlcpy(str1, s1, size1 + 1);
	strlcpy(str2, s2, size2 + 1);
	strlcpy(str3, s3, size3 + 1);

	printf("%s - str1\n", str1);
	printf("%s - str2\n", str2);
	printf("%s - str3\n", str3);
}
*/
