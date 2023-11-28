/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:40:10 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/28 15:52:24 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char	*s1 = "ESTA STRING ES TODA MAYUSCULA";
	char	*s2 = "esta string es toda minuscula";
	char	*s3 = "Esta String Tiene MeZcLa";

	char	*str1 = malloc(strlen(s1) + 1);
	char	*str2 = malloc(strlen(s2) + 1);
	char	*str3 = malloc(strlen(s3) + 1);

	strncpy(str1, s1, strlen(s1));
	strncpy(str2, s2, strlen(s2));
	strncpy(str3, s3, strlen(s3));

	printf("%s - str1\n", ft_strupcase(str1));
	printf("%s - str2\n", ft_strupcase(str2));
	printf("%s - str3\n", ft_strupcase(str3));
}
*/
