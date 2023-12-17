/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 08:35:48 by iginsaus          #+#    #+#             */
/*   Updated: 2023/12/14 09:08:53 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char c= 'a';
	print("%d", ft_isalpha(c));
	return (0);
}
*/
/* La función isalpha() comprueba si un caracter es una letra del alfabeto inglés.
Devuelve un valor distinto de cero si el caracter es una letra y cero si no lo es.
*/
