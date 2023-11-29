/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:53:13 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/29 16:46:47 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alnum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	ft_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	ft_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	while (str[i])
	{
		flag = 1;
		while (!is_alnum(str[i]))
			i++;
		while (is_alnum(str[i]))
		{
			str[i] = ft_lower(str[i]);
			if (flag)
			{
				str[i] = ft_upper(str[i]);
				flag = 0;
			}
			i++;
		}
	}
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char	*s1 = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	char	*str1 = malloc(strlen(s1) + 1);

	strncpy(str1, s1, strlen(s1));

	printf("%s - str1\n", ft_strcapitalize(str1));
}
*/