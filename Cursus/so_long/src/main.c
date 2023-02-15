/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouchar <fbouchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:47:50 by fbouchar          #+#    #+#             */
/*   Updated: 2023/02/15 12:43:27 by fbouchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	int	fd;

	fd = open("./map/map.ber", O_RDONLY);
	if (fd == -1)
		return (1);
	ft_printf("%s", get_next_line(fd));
	ft_printf("%s", get_next_line(fd));
	ft_printf("%s", get_next_line(fd));
	ft_printf("%s", get_next_line(fd));
	ft_printf("%s", get_next_line(fd));
	ft_printf("%s", get_next_line(fd));
	close(fd);
}