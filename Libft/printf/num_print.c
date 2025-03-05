/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:19:28 by fleite-j          #+#    #+#             */
/*   Updated: 2025/02/13 17:19:30 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	print_int(int n)
{
	int		count;
	int		i;
	char	*nbr;

	count = 0;
	i = 0;
	nbr = ft_itoa(n);
	while (nbr[i])
		count += write(1, &nbr[i++], 1);
	free(nbr);
	return (count);
}

int	print_uns_int(unsigned int n)
{
	int		count;
	int		i;
	char	*nbr;

	count = 0;
	i = 0;
	nbr = ft_uns_itoa(n);
	while (nbr[i])
		count += write(1, &nbr[i++], 1);
	free(nbr);
	return (count);
}

int	hex_len(unsigned int n)
{
	int	len;

	len = 0;
	if (len == 0)
		return (1);
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}

void	hex_write(unsigned int n, char format)
{
	char	c;
	char	*hex;
	char	*upper_hex;

	hex = "0123456789abcdef";
	upper_hex = "0123456789ABCDEF";
	if (n > 16)
	{
		hex_write((n / 16), format);
		hex_write((n % 16), format);
	}
	else
	{
		if (format == 'x')
		{
			c = hex[n];
			write(1, &c, 1);
		}
		else if (format == 'X')
		{
			c = upper_hex[n];
			write(1, &c, 1);
		}
	}
}

int	print_hex(unsigned int n, char format)
{
	int		count;

	hex_write(n, format);
	count = hex_len(n);
	return (count);
}
