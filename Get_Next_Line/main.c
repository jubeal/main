#include "get_next_line.h"
#include <fcntl.h>

int		main()
{
	//int	fd = open("test", O_RDONLY);
	int		ret;
	char	*line;

	while ((ret = get_next_line(42, &line)) > 0)
	{
		ft_putstr(line);
	}
	ft_putnbr(ret);
	return (0);
}
