/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:50:16 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/30 20:50:44 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return (
		c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ');
}

int	ft_is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	neg = 1;
	num = 0;
	while (ft_is_space(str[i]))
		i++;
	while (ft_is_sign(str[i]))
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_is_digit(str[i]))
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num * neg);
}

/*
#include <stdio.h>
int main()
{
	char	*s1 = " ---+--+1234ab567";
	int		e1 = -1234;

	printf("'%s' -> ft_atoi\nExp: %d\nGot: %d\n", s1, e1, ft_atoi(s1));
	if (ft_atoi(s1) == e1)
		printf("Success!\n");
	else
		printf("FAIL!\n");
}
*/
