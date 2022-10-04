#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>
# include <stdbool.h>
# include <stdarg.h>


char	*ft_itoa_base(unsigned long long n, char *base);
int	    ft_putstr(char *str);
void	ft_putchar(char c);
int	    ft_decimal(int nb);
int	    ft_decimal_unsig(unsigned int nb);
int	    ft_hexa(unsigned int nb);
int	    ft_hexamayus(unsigned int nb);
int	    ft_char_format(char c);
int	    ft_void(void *ptr_address);
int	    ft_printpercent();


#endif