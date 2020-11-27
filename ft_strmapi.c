/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 14:35:38 by tcynthia          #+#    #+#             */
/*   Updated: 2020/11/25 15:04:58 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rtn;
	size_t	i;

	rtn = NULL;
	if (s && f && (rtn = ft_newstr(ft_strlen(s))))
	{
		i = 0;
		while (s[i])
		{
			rtn[i] = f(i, s[i]);
			i++;
		}
		rtn[i] = '\0';
	}
	return (rtn);
}
