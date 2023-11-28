/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:47:03 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/26 11:49:16 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_comb2(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = (char)((a / 10) + 48);
	a2 = (char)((a % 10) + 48);
	b1 = (char)((b / 10) + 48);
	b2 = (char)((b % 10) + 48);
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (a < 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write_comb2(a, b);
			b++;
		}
		a++;
	}
}
