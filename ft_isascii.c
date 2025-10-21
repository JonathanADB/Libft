/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonadomi <jonadomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 21:14:41 by jonadomi          #+#    #+#             */
/*   Updated: 2025/10/17 15:13:41 by jonadomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/* 
int main(void)
{
    char ch1 = 'A';
    char ch2 = 200;

    if (ft_isascii(ch1))
        printf("'%c' es ASCII\n", ch1);
    else
        printf("'%c' NO es ASCII\n", ch1);

    if (ft_isascii(ch2))
        printf("'%c' es ASCII\n", ch2);
    else
        printf("'%c' NO es ASCII\n", ch2);

    return 0;
} */