/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:04:07 by adgutier          #+#    #+#             */
/*   Updated: 2022/10/10 10:04:07 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char get_line(char *buff)
{
    int i;
    char *mem;

    i = 0;
    while(buff[i] && buff != '\n')
    i++;
    mem = malloc(sizeof(char *) * (i + 2));
    if(!mem)
        return(NULL);
        i = 0;
    while(buff[i] && buff != '\n')
    {
        mem[i] = buff[i];
        i++;
    }
    if(buff[i] && buff[i] == '\n')
        mem[i++] = '\n';
    return(mem); 
}

char next_line(char *buff)
{
    int i;
    int j;
    char *memo;

    i = 0;
    while (buff[i] && buff[i] != '\n')
		i++;
    if(!buff)
    {
        free(buff);
        return(NULL);
    }
    memo = malloc(sizeof(char *) * (ft_strlen(buff) -i -1));
    i++;
    j = 0;
    while(buff[i])
        memo[j++] = buff[i++];
    free(buff);
    return(memo);
}

static char	*frees(char *buffer, char *buf)
{
	char	*temp;

	temp = ft_strjoin(buffer, buf);
	free(buffer);
	return (temp);
}

char ft_read_content(int fd, char *content)
{
    int byte;
    char *buff;
    
    byte = 1;
    if(!content)
        return(NULL);
    buff = malloc(sizeof(char *) * (BUFF_SIZE + 1));
    while(byte > 0)
    {
        byte = read(fd, buff, BUFF_SIZE);
        if(byte == -1)
        {
            free(buff);
            return(NULL);
        }
        buff[byte] = 0;
        content = frees(content, buff);
        if (ft_strchr(buff, '\n'))
			break ;

    }
}

char *get_next_line(fd)
{
    static char *buff;
    char *cont;

    if (fd < 0 || BUFF_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
    buff = ft_read_content(fd, buff);
    if(!buff)
    return(NULL);
    cont = get_line(buff);
    buff = get_next_line(buff);
    return(cont);

}