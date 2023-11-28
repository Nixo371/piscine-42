/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:46:04 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/28 18:58:40 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_nonprintable(char c)
{
	char	a;
	char	b;

	a = "0123456789abcdef"[c / 16];
	b = "0123456789abcdef"[c % 16];
	write(1, "\\", 1);
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 127)
			write(1, &str[i], 1);
		else
			ft_nonprintable(str[i]);
		i++;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char	*s1 = "Esta no tiene caracteres no imprimibles";
	char	*s2 = "Esta tiene uno \b <- aqui (\\08)";
	char	*s3 = "Esta tiene uno \n <- aqui (\\0a) y \x12 <- aqui (\\12)";

	int	size1 = strlen(s1);
	int	size2 = strlen(s2);
	int	size3 = strlen(s3);

	char	*str1 = malloc(size1 + 1);
	char	*str2 = malloc(size2 + 1);
	char	*str3 = malloc(size3 + 1);

	strncpy(str1, s1, size1 + 1);
	strncpy(str2, s2, size2 + 1);
	strncpy(str3, s3, size3 + 1);

	ft_putstr_non_printable(str1);
	printf(" - str1\n");

	ft_putstr_non_printable(str2);
	printf(" - str2\n");

	ft_putstr_non_printable(str3);
	printf(" - str3\n");
}
*/
