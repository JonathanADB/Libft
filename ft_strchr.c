/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonadomi <jonadomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:46:40 by jonadomi          #+#    #+#             */
/*   Updated: 2025/10/20 22:45:19 by jonadomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/* 
int main(void)
{
    const char *texto = "hola mundo";
    char *resultado = ft_strchr(texto, 'm');

    if (resultado)
        printf("Encontrado: %s\n", resultado);
    else
        printf("No encontrado\n");

    return 0;
}
 */
