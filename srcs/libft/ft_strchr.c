/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gzanarel <gzanarel@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 14:20:00 by gzanarel     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/06 14:04:32 by gzanarel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	l;

	str = (char *)s;
	l = (unsigned char)c;
	while (*str != l)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
