/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:34:28 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/30 20:50:33 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	n;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		n = (nb % 10) + '0';
		write(1, &n, 1);
	}
	else
	{
		n = nb + '0';
		write(1, &n, 1);
	}
}

/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putnbr(argv[i]);
		printf("\n%d\n---\n", argv[i]);
		i++;
	}
}
*/
