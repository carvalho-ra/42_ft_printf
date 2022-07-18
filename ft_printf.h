/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:19:08 by rcarvalh          #+#    #+#             */
/*   Updated: 2022/07/11 18:07:19 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

char	*ft_itoa_pfu(unsigned int n);
int		ft_putchar_pf(char c);
int		ft_printf(const char *s, ...);
int		ft_puthex(unsigned int c, char *n_hex);
int		ft_putnbr_pf(int c);
int		ft_putnbr_pfu(unsigned int c);
int		ft_putptr(void *c, char *n_hex);
int		ft_putstr_pf(char *str);

#endif
