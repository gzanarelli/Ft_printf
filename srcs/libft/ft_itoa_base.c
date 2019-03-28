/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gzanarel <gzanarel@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/19 13:28:34 by gzanarel     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/11 18:08:38 by gzanarel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

char			ft_base_low(unsigned int nb)
{
	char c;

	if (nb > 9)
		c = nb + 87;
	else
		c = nb + 48;
	return (c);
}

char			ft_base_up(unsigned int nb)
{
	char c;

	if (nb > 9)
		c = nb + 55;
	else
		c = nb + 48;
	return (c);
}

unsigned int	ft_nbrlen_base(uintmax_t n, int base)
{
	int cnt;

	cnt = 0;
	if (n == 0)
		cnt++;
	while (n != 0)
	{
		n /= base;
		cnt++;
	}
	return (cnt);
}

char			*ft_itoa_base_low(uintmax_t n, int base)
{
	int		len;
	char	*str;
	int		tmp;

	len = ft_nbrlen_base(n, base);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		tmp = n % base;
		str[--len] = ft_base_low(tmp);
		n = n / base;
	}
	return (str);
}

char			*ft_itoa_base_up(uintmax_t n, int base)
{
	int		len;
	char	*str;
	int		tmp;

	len = ft_nbrlen_base(n, base);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		tmp = n % base;
		str[--len] = ft_base_up(tmp);
		n = n / base;
	}
	return (str);
}
