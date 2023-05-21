/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfukushi <hfukushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:19:51 by hfukushi          #+#    #+#             */
/*   Updated: 2023/05/20 21:46:40 by hfukushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	flag;

	flag = 0;
	if (ft_isalpha(c) || ft_isdigit(c))
		flag = 1;
	return (flag);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c;
// 	c = 'a';
// 	printf("%d\n", ft_isalnum(c));
// 	c = 'A';
// 	printf("%d\n", ft_isalnum(c));
// 	c = '0';
// 	printf("%d\n", ft_isalnum(c));
// 	c = '*';
// 	printf("%d\n", ft_isalnum(c));
// 	return(0);
// }