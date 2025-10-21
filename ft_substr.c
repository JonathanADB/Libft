/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonadomi <jonadomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:41:30 by jonadomi          #+#    #+#             */
/*   Updated: 2025/10/20 12:36:52 by jonadomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	string_len;

	if (!s)
		return (NULL);
	string_len = ft_strlen(s);
	if (start >= string_len)
		return (ft_calloc(1, 1));
	if (len > string_len - start)
		len = string_len - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

/* char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	string_len;

	if (!s)
		return (NULL);
	string_len = ft_strlen(s);
	if (start >= string_len)
	{
		substr = (char *)malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > string_len - start)
		len = string_len - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);	
} 
int main(void)
{
    char *s = "Hola mundo";
    char *sub = ft_substr(s, 5, 3); // Esperado: "mun"

    printf("Subcadena: %s\n", sub);
    free(sub);
    return 0;
}
*/