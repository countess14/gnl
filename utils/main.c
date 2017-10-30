#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int		main(int __unused ac, char **av)
{
	int		fd = open(av[1], O_RDONLY);
	char	*line;
	 int ret;

	while ((ret = get_next_line(fd, &line)) > 0)
	{
		ft_putstr(line);
		ft_strdel(&line);
		ft_putnbr(ret);
		ft_putchar('\n');
//		printf("%s\n", stockk);
	}
	while (1)
		;
	ft_putnbr(ret);
	//ft_putnbr(ret);
	return (0);
}
