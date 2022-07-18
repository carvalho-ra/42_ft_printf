/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:02:08 by rcarvalh          #+#    #+#             */
/*   Updated: 2022/07/11 11:21:27 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int c)
{
	char	*s;
	int		len;

	s = ft_itoa(c);
	len = ft_putstr_pf(s);
	free(s);
	return (len);
}
