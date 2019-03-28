/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gzanarel <gzanarel@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 14:18:24 by gzanarel     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/11 18:08:48 by gzanarel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

void	ft_putstr_p(char const *s, t_prnt *p)
{
	int i;

	i = 0;
	while (i < p->buf)
		ft_putchar_p(s[i++], p);
	p->tmp = 0;
}
