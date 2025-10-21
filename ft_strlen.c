/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonadomi <jonadomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:05:56 by jonadomi          #+#    #+#             */
/*   Updated: 2025/10/21 10:49:07 by jonadomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*current_ptr;

	current_ptr = s;
	while (*current_ptr)
	{
		current_ptr++;
	}
	return (current_ptr - s);
}

/* int main() {
	char *texto = "Hola mundo";

	printf("La longitud de \"%s\" es: %d\n", texto, ft_strlen(texto));

	return 0;
} */