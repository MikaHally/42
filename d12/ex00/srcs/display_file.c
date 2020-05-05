/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:43:04 by mhally            #+#    #+#             */
/*   Updated: 2018/09/05 14:43:08 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(char *file)
{
	int		fd;
	char	buf;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return ;
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
	}
	else if (argc == 1)
	{
		write(2, "Missing file name.\n", 19);
	}
	else
	{
		display(argv[1]);
	return (0);
}
