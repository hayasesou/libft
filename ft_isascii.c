/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfukushi <hfukushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 21:00:31 by hfukushi          #+#    #+#             */
/*   Updated: 2023/05/20 21:52:56 by hfukushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	int	flag;

	flag = 0;
	if (c >= 0 && c <= 127)
		flag = 1;
	return (flag);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char c = 'a';
// 	printf("%d\n", ft_isascii(c));
// 	char d = ' ';
// 	printf("%d\n", ft_isascii(d));
// 	char e = '0';
// 	printf("%d\n", ft_isascii(e));
// 	char f = 'ｱ';
// 	printf("%d\n", ft_isascii(f));
// 	return (0);
// }