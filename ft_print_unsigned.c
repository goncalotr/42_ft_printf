/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goteixei <goncalotribeiro@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:46:55 by goteixei          #+#    #+#             */
/*   Updated: 2024/11/15 16:30:51 by goteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goteixei <goncalotribeiro@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:31:20 by goteixei          #+#    #+#             */
/*   Updated: 2024/11/02 11:46:29 by goteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_uns_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_put_uns(unsigned int n)
{
	static char	digits[] = "0123456789";

	if (n > 9)
		ft_put_uns(n / 10);
	write(1, &digits[n % 10], 1);
}

int	ft_print_unsigned(unsigned int n)
{
	int	len;

	len = ft_uns_len(n);
	ft_put_uns(n);
	return (len);
}

/*
#include <stdio.h>

int main(void)
{
	unsigned int test_number = -2147483648;
	printf("Print result: \n");
	printf("Result length:\n%d", ft_print_unsigned(test_number));
	printf("\n");
	return (0);
}
*/