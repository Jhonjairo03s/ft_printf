/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:49:44 by jhvalenc          #+#    #+#             */
/*   Updated: 2024/12/26 15:53:12 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

int	main(void)
{
	int	a;
	int	*ptr;

	a = 10;
	ptr = &a;
	printf("printf: %c\n", 'A');
	ft_printf("ft_printf: %c\n", 'A');
	printf("printf: %c\n", '\t');
	ft_printf("ft_printf: %c\n", '\t');

	printf("printf: %s\n", "Hola, mundo!");
	ft_printf("ft_printf: %s\n", "Hola, mundo!");
	printf("printf: %s\n", "");
	ft_printf("ft_printf: %s\n", "");

	printf("printf: %d\n", 42);
	ft_printf("ft_printf: %d\n", 42);
	printf("printf: %d\n", INT_MAX);
	ft_printf("ft_printf: %d\n", INT_MAX);
	printf("printf: %d\n", INT_MIN);
	ft_printf("ft_printf: %d\n", INT_MIN);

	printf("printf: %x\n", 0xabcdef);
	ft_printf("ft_printf: %x\n", 0xabcdef);
	printf("printf: %X\n", 0xABCDEF);
	ft_printf("ft_printf: %X\n", 0xABCDEF);

	printf("printf: %p\n", ptr);
	ft_printf("ft_printf: %p\n", ptr);
	printf("printf: %p\n", NULL);
	ft_printf("ft_printf: %p\n", NULL);

	printf("printf: %d - %s - %c\n", 42, "Hola, mundo!", 'A');
	ft_printf("ft_printf: %d - %s - %c\n", 42, "Hola, mundo!", 'A');
	return (0);
}
