/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfukushi <hfukushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 04:59:06 by hfukushi          #+#    #+#             */
/*   Updated: 2023/06/12 02:27:24 by hfukushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (*s_p == letter)
		return (s_p);
	if (last_p == NULL)
		return (NULL);
	if (*last_p != NULL)
		return (last_p);
	return (NULL);
}

// #include <string.h>
// int main()
// {
// 	char *s = "libft-test-tokyo";
// 	char *p = strrchr(s, 364);
// 	printf("%s",p);
// 	printf("%c",'i' -256);
// 	return(0);
// }