/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:57:11 by soel-mou          #+#    #+#             */
/*   Updated: 2023/12/17 10:57:17 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *input, ...);
int		print_pointer(unsigned long value, int asc);
int		print_unsigned(unsigned int nb);
int		print_string(char *s);
int		print_int(int n);
int		print_char(char c);
int		print_hex(unsigned int value, int asc);

#endif
