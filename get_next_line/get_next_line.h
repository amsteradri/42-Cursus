/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:16:47 by adgutier          #+#    #+#             */
/*   Updated: 2022/10/10 10:16:47 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE
# define FT_GET_NEXT_LINE
#ifndef BUFF_SIZE
# define BUFF_SIZE BUFSIZ
#endif

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

size_t	ft_strlen(char *str);
char get_line(char *buff);
char next_line(char *buff);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char ft_read_content(int fd, char *content);

#endif