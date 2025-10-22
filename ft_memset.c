/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonadomi <jonadomi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:24:22 by jonadomi          #+#    #+#             */
/*   Updated: 2025/10/21 16:24:24 by jonadomi         ###   ########.fr       */
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
