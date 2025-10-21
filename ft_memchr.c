/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonadomi <jonadomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:31:27 by jonadomi          #+#    #+#             */
/*   Updated: 2025/10/17 15:46:37 by jonadomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		p++;
	}
	return (NULL);
}
/* 
int main() {
    const char texto[] = "Hola mundo";
    char *resultado = mi_memchr(texto, 'm', sizeof(texto));

    if (resultado) {
        printf("Carácter encontrado: %c\n", *resultado);
    } else {
        printf("Carácter no encontrado\n");
    }

    return 0;
} */
