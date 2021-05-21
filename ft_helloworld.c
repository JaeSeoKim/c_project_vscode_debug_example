/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helloworld.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:08:29 by jaeskim           #+#    #+#             */
/*   Updated: 2021/05/21 11:11:47 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

char	*ft_helloworld(void)
{
	char	*helloworld;

	helloworld = malloc(sizeof(char) * 11);
	if (helloworld == NULL)
		return (NULL);
	helloworld[0] = 'h';
	helloworld[1] = 'e';
	helloworld[2] = 'l';
	helloworld[3] = 'l';
	helloworld[4] = 'o';
	helloworld[5] = 'w';
	helloworld[6] = 'o';
	helloworld[7] = 'r';
	helloworld[8] = 'l';
	helloworld[9] = 'd';
	helloworld[10] = '\0';
	return (helloworld);
}
