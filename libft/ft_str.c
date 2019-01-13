/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscolera <gscolera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 16:14:31 by gscolera          #+#    #+#             */
/*   Updated: 2019/01/13 16:14:32 by gscolera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strnew(size_t size)
{
	char *new;

	if (size == 0 || size == (size_t)-1)
		return (NULL);
	if (!(new = (char*)malloc(size + 1)))
		return (NULL);
	new[size] = '\0';
	while (size-- > 0)
		new[size] = '\0';
	return (new);
}

char	*ft_strdup(const char *str)
{
	char	*tmp;
	int		length;

	if (!str)
		return (NULL);
	length = ft_strlen(str);
	if (!(tmp = ft_strnew(length)))
		return (NULL);
	while (str[--length])
		tmp[length] = str[length];
	return (tmp);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*tmp;
	int		fi;
	int		si;

	if (!s1 && !s2)
		return (NULL);
	if (!(tmp = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	fi = -1;
	while (s1[++fi])
		tmp[fi] = s1[fi];
	si = -1;
	while (s2[++si])
		tmp[fi++] = s2[si];
	return (tmp);
}
