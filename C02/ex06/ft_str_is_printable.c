/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:16:55 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/28 14:28:36 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <unistd.h>
int main()
{
	char	*str = "Esta string tiene espacios ademas de letras";
	char	*str2 = "EstaStringNo";
	char	*str3 = "Esta va con una eñe, que no es imprimible";

	char	s;
	char	s2;
	char	s3;

	s = ft_str_is_alpha(str) + '0';
	s2 = ft_str_is_alpha(str2) + '0';
	s3 = ft_str_is_alpha(str3) + '0';

	write(1, &s, 1);
	write(1, " - str\n", 8);
	
	write(1, &s2, 1);
	write(1, " - str2\n", 9);

	write(1, &s3, 1);
	write(1, " - str3\n", 9);
}
*/
