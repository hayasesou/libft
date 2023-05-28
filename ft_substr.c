/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfukushi <hfukushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 02:49:10 by hfukushi          #+#    #+#             */
/*   Updated: 2023/05/28 14:32:33 by hfukushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str[0] = '\0';
		return (str);
	}
	while (s[i + start] != '\0' && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// void	test(char const *s, unsigned int start, size_t len)
// {
// 	printf(">> %s %d %zu\n", s, start, len);
// 	char *ret = ft_substr(s, start, len);

// 	int i = 0;
// 	while (1)
// 	{
// 		printf("%d\n", i);
// 		if (ret[i] == '\0')
// 			break ;
// 		printf("%c", ret[i]);
// 		i++;
// 	}
// 	printf("[%s]\n", ret);
// }

// int main ()
// {
// 	test("libft-test-tokyo", 0, 100);
// }
// [test 5] ASSERT_EQ_STR failed: ("s/test_ft_substr.c") is not 
//equal to expected (""). func main at file srcs/test_ft_substr.c,
	// line 22
// [test 10] ASSERT_EQ_STR failed: ("s/tes") is not equal to expected
// (""). func main at file srcs/test_ft_substr.c,
	// line 27