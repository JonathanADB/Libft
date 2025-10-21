/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonadomi <jonadomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:53:56 by jonadomi          #+#    #+#             */
/*   Updated: 2025/10/17 15:05:33 by jonadomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/* 
int main() {
	char letra = 'a'; 

	if (ft_isalpha(letra))
		printf("'%c' es una letra.\n", letra);
	else
		printf("'%c' NO es una letra .\n", letra);

	return 0;
}  */