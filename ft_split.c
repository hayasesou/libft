/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfukushi <hfukushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:25:11 by hfukushi          #+#    #+#             */
/*   Updated: 2023/05/28 18:33:25 by hfukushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
			ret[j] = ft_substr(s,i,word_len(&s[i],d));
		while(s[i] && !isDelimiter(s[i],d))
			i++;
		j++;
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


// int main()
// {
// 	char *s = "hello world";
// 	char **ret = ft_split(s,' ');
// 	int i = 0;
// 	while(ret[i])
// 	{
// 		printf("%s\n",ret[i]);
// 		i++;
// 	}
// 	return (0);
// }