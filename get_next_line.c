/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:05:45 by drubio-m          #+#    #+#             */
/*   Updated: 2022/04/24 21:14:07 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_write_in_aux(int fd, char *aux)
{
	char	*buff;
	int		bytes;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(aux, '\n') && bytes != 0)
	{	
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == -1)
		{
			free (buff);
			return (NULL);
		}
		buff[bytes] = '\0';
		aux = ft_strjoin(aux, buff);
	}
	free(buff);
	return (aux);
}
char	*get_next_line(int fd)
{
	char				*str;
	static char			*aux;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	aux = ft_write_in_aux(fd, aux);
	if (!aux)
		return (NULL);
	str = ft_print_line(aux);
	aux = ft_new_static(aux);
	return (str);
}

/*
char	*read_line(char *str):q
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
