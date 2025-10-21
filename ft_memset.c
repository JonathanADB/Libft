/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonadomi <jonadomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:32:12 by jonadomi          #+#    #+#             */
/*   Updated: 2025/10/17 15:28:45 by jonadomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (ptr);
}

/* 
int main() {
    char texto[6];

    ft_memset(texto, 's', 6);

    printf("%s\n", texto);

    return 0;
} */
