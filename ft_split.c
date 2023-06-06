/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfukushi <hfukushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:25:11 by hfukushi          #+#    #+#             */
/*   Updated: 2023/06/06 13:55:00 by hfukushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdio.h>


int isDelimiter(char s, char d)
{
	if (s == d)
		return (1);
	return (0);
}

int  countStrings(char *s,char d)
{
	int count;
	int i;

	i = 0;
	i =0;
	count = 0;
	while(s[i] != '\0')
	{
		if(isDelimiter(s[i],d) )
			i++;
		else
		{
			count++;
			while(!isDelimiter(s[i],d))
			{
				if(s[i] == '\0')
					break;
				i++;
			}
		}
	}
	return (count);
}

int word_len(char *s, char d)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while(!isDelimiter(s[i],d) &&s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

void create2DArray(char **ret,char *s, char d)
{
	int i;
	int j;

	i = 0;
	j = 0 ;
	while(s[i] != '\0')
	{
		while(s[i] &&isDelimiter(s[i],d))
			i++;
		if(s[i])
		{
			ret[j] = ft_substr(s,i,word_len(&s[i],d));
			j++;
		}
		while(s[i] && !isDelimiter(s[i],d))
			i++;
	}
	ret[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char **ret;
	int i;

	ret = (char **)malloc(sizeof(char *) * (countStrings((char *)s, c) + 1));
	if(ret == NULL)
		return (NULL);
	i =0 ;
	create2DArray(ret,(char *)s,c);
	return (ret);
}




// void	test(const char *str, int c)
// {
// 	printf("\n> str [%s] c [%c]\n", str, c);

// 	char	**ret;

// 	ret = ft_split(str, c);

// 	int i = 0;
// 	while(ret[i])
// 	{
// 		printf("%s\n",ret[i]);
// 		i++;
// 	}
// }

// int		main()
// {
// 	test("hello world", ' '); //normal 
// 	test("   hello world", ' '); //front
// 	test("hello world  ", ' ');//rear
// 	test("         ", ' '); //allDelimniter
// 	test(" ",'\0');
// 	test("hello	world",'\0'); //tab
// 	test("hello																																		world",'\0'); //long
// }

