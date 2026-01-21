/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:44:25 by hlib              #+#    #+#             */
/*   Updated: 2026/01/21 22:52:13 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;
	int		count;

	fd = open("README.md", O_RDONLY);
	count = 1;
	while ((line = get_next_line(fd)))
	{
		printf("Line %d: [%s]", count, line); // Brackets prove start/end
		free(line);
		count++;
	}
	close(fd);
	return (0);
}
