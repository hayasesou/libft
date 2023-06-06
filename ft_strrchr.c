/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfukushi <hfukushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 04:59:06 by hfukushi          #+#    #+#             */
/*   Updated: 2023/06/06 18:14:55 by hfukushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char			*s_p;
	char			*last_p;
	unsigned char	letter;

	s_p = (char *)s;
	letter = '\0' + c;
	last_p = NULL;
	while (*s_p != '\0')
	{
		if (*s_p == letter)
			last_p = s_p;
		s_p++;
	}
	if(c == 0)
		return(s_p);
	if (last_p == NULL)
		return (NULL);
	if (*s_p == letter)
		return (s_p);
	if (*last_p == letter)
		return (last_p);
	return (NULL);
}

// #include <string.h>
// int main()
// {
// 	// char *s = "libft-test-tokyo";
// 	// char *p = strrchr(s, 'l'+256);
// 	// printf("%s",p);
// 	printf("%c",'i' -256);
// 	return(0);
// }