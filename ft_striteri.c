/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonadomi <jonadomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:49:02 by jonadomi          #+#    #+#             */
/*   Updated: 2025/10/20 19:05:51 by jonadomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}
}

/* void apply_toupper(unsigned int i, char *c)
{
    (void)i;
    *c = ft_toupper(*c);
}

int main(void)
{
    char str[] = "hola mundo";

    printf("Original    : %s\n", str);
    ft_striteri(str, apply_toupper);
    printf("Transformada: %s\n", str); 

    return 0;
} */