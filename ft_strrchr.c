/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonadomi <jonadomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 22:37:05 by jonadomi          #+#    #+#             */
/*   Updated: 2025/10/08 14:30:02 by jonadomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*latest;

	latest = NULL;
	while (*s)
	{
		if (*s == (char)c)
			latest = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (latest);
}
/* 
int main(void)
{
    const char  *texto = "42 Bilbao mola mucho";
    char        *resultado;

    resultado = ft_strrchr(texto, 'o');
    if (resultado)
        printf("Última 'o': %s\n", resultado);
    else
        printf("No se encontró 'o'\n");
    return (0);
} */
