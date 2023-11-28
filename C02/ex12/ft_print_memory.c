/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:59:30 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/28 20:44:10 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_content(void *addr, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i < 16 && size > i)
	{
		c = ((char *)addr)[i];
		if (c >= 32 && c <= 127)
			write(1, &c, 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	ft_print_mem_hex(void *addr, int size)
{
	int		i;
	int		hex;
	char	c;

	i = 0;
	while (i < 16)
	{
		if (size > i)
		{
			hex = (int)*(char *)(addr + i);
			c = "0123456789abcdef"[hex / 16];
			write(1, &c, 1);
			c = "0123456789abcdef"[hex % 16];
			write(1, &c, 1);
		}
		else
			write (1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_mem_addr(long int n)
{
	long int	start;
	char		c;

	start = 0x1000000000000000;
	while (start)
	{
		c = "0123456789abcdef"[n / start];
		write(1, &c, 1);
		n %= start;
		start /= 16;
	}
	write(1, ": ", 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	s;

	s = 0;
	while (s < size)
	{
		ft_print_mem_addr((long int)addr + s);
		ft_print_mem_hex(addr + s, size - s);
		ft_print_content(addr + s, size - s);
		write(1, "\n", 1);
		s += 16;
	}
	return (addr);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char	*str;

	str = malloc(sizeof(char) * (92));
	strncpy(str, "Bonjour les aminches\t\n\tc\a est fou\t", 34);
	strncpy(str + 34, "tout\tce qu on peut faire ", 25);
	strncpy(str + 59, "avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0", 33);
	ft_print_memory((void *)str, 92);
}
*/
