/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:05:45 by drubio-m          #+#    #+#             */
/*   Updated: 2022/04/22 19:32:30 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*get_next_line(int fd)
{
	char				*str;
	static char			*aux;
	int					bytes;
	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	bytes = read(fd, ret, BUFFER_SIZE);
	
}
/*
char	*read_line(char *str)
{
	int		i;
	char	*ret;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			break ;
		i++;
	}
//	printf("%d\n", i);
	ret = malloc(sizeof (char) * 1 + 1);
	if (!ret)
		return (NULL);
	ret[i] = '\0';
	while (i-- > 0)
		ret[i] = str[i];
	return (ret);
}
*/
/*
int main(void)
{
	char *str = "ma\nolo";
	char *ret;

	ret = read_line(str);
	printf("%s", ret);
	return (0);
}
*/
