/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonadomi <jonadomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:14:45 by jonadomi          #+#    #+#             */
/*   Updated: 2025/10/20 22:35:05 by jonadomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	if (!str)
		return ;
	write(fd, str, ft_strlen(str));
	free (str);
}

/* int main(void)
{
    ft_putnbr_fd(2025, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(-42, 1);
    write(1, "\n", 1);
    return 0;
} */