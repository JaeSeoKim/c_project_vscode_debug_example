/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:13:44 by jaeskim           #+#    #+#             */
/*   Updated: 2021/05/21 11:15:30 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libtest.h>

int	main(void)
{
	char	*helloworld;

	helloworld = ft_helloworld();
	printf("ft_add42.c : %d\n", ft_add42(0));
	if (helloworld)
	{
		printf("%s\n", helloworld);
		free(helloworld);
		return (0);
	}
	return (1);
}
