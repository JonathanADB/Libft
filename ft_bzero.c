/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonadomi <jonadomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 20:16:12 by jonadomi          #+#    #+#             */
/*   Updated: 2025/10/20 13:49:25 by jonadomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p++ = 0;
	}
}

/* int main() {
    char buffer[10] = "Hola";

    bzero(buffer, sizeof(buffer));

    int i = 0;
    while (i < 10)
    {
        printf("%d ", buffer[i]);
        i++;
    }

    return 0;
} */