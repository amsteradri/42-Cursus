/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:51:52 by adgutier          #+#    #+#             */
/*   Updated: 2022/10/11 16:04:09 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE BUFSIZ
# endif

size_t	ft_strlen(char *str);
char	*get_line(char *buff);
char	*next_line(char *buff);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_read_content(int fd, char *content);
char	*get_next_line(int fd);
char	*frees(char *buffer, char *buf);
void	*ft_calloc(size_t numcarac, size_t size);
void	ft_bzero(void *s, unsigned int n);

#endif