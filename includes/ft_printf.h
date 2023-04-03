/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:17:10 by dhadding          #+#    #+#             */
/*   Updated: 2023/03/31 11:04:38 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);

int		ft_printf_print_char(int c);
int		ft_printf_print_int(int n);
int		ft_printf_print_u_int(unsigned int u);
int		ft_printf_print_str(char *s);
int		ft_printf_print_hex(unsigned int x, char format);
int		ft_printf_print_pointer(unsigned long long p);
int		ft_printf_print_pcent(void);

void	ft_put_str(char *str);
void	ft_put_ptr(uintptr_t num);
int		ft_ptr_len(uintptr_t num);
int		ft_hex_length(unsigned int num);
void	ft_put_hex(unsigned int num, char format);
size_t	ft_num_len(int n);
size_t	ft_unsigned_num_len(unsigned int num);
char	*ft_itoa(int n);

#endif
