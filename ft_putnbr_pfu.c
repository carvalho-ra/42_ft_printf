/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pfu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:03:17 by rcarvalh          #+#    #+#             */
/*   Updated: 2022/07/11 14:17:48 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pfu(unsigned int c)
{
	char	*s;
	int		len;

	s = ft_itoa_pfu(c);
	len = ft_putstr_pf(s);
	free(s);
	return (len);
}
