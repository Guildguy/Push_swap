/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:19:51 by fleite-j          #+#    #+#             */
/*   Updated: 2025/02/13 17:19:56 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

static int	ft_int_len(int n)
{
	int	len;

	len = 0;
	if (len == 0)
		return (0);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*digit;

	num = n;
	len = ft_int_len(num);
	digit = malloc((len + 1) * sizeof(char));
	if (digit == NULL)
		return (NULL);
	digit[len] = '\0';
	if (num < 0)
	{
		digit[0] = '-';
		num = -num;
	}
	else if (num == 0)
		digit[0] = '0';
	while (num > 0)
	{
		digit[(--len)] = (num % 10) + '0';
		num = num / 10;
	}
	return (digit);
}

static int	ft_uns_int_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_uns_itoa(unsigned int n)
{
	char	*digit;
	int		len;

	len = ft_uns_int_len(n);
	digit = malloc((len + 1) * sizeof(char));
	if (digit == NULL)
		return (NULL);
	digit[len] = '\0';
	if (n == 0)
		digit[0] = '0';
	while (n)
	{
		digit[(--len)] = (n % 10) + '0';
		n = n / 10;
	}
	return (digit);
}
