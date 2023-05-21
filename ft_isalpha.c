/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfukushi <hfukushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:59:24 by hfukushi          #+#    #+#             */
/*   Updated: 2023/05/20 21:46:28 by hfukushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	flag;

	flag = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		flag = 1;
	return (flag);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c;

// 	c = 'a';
// 	printf("%d\n", ft_isalpha(c));
// 	c = 'A';
// 	printf("%d\n", ft_isalpha(c));
// 	c = '0';
// 	printf("%d\n", ft_isalpha(c));
// 	return (0);
// }
