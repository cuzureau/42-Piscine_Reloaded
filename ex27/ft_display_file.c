/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:07:32 by cuzureau          #+#    #+#             */
/*   Updated: 2016/11/07 18:35:40 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1000

void	ft_putchar(int std, char c)
{
	write(std, &c, 1);
}

void	ft_putstr(int std, char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(std, str[i]);
		i++;
	}
}

void	ft_display_file(char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(1, buf);
	}
	if (close(fd) == -1)
		ft_putstr(2, "close() error");
}

int		main(int argc, char **argv)
{
	if (argc > 2)
		ft_putstr(2, "Too many arguments.\n");
	else if (argc == 1)
		ft_putstr(2, "File name missing.\n");
	else
		ft_display_file(argv);
	return (0);
}
