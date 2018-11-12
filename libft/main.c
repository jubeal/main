/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubeal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:27:24 by jubeal            #+#    #+#             */
/*   Updated: 2018/11/12 16:37:27 by jubeal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

void	ft_maj(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

char	ft_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

int		main(void)
{
	char	*test;

	ft_putstr("putchar:\n");
	ft_putstr("attendu: a\n");
	ft_putstr("obtenue: ");
	ft_putchar('a');
	printf("\n\n");

	ft_putstr("putstr:\n");
	printf("attendu: Bonjour\n");
	ft_putstr("obtenue: ");
	ft_putstr("Bonjour");
	printf("\n\n");

	ft_putstr("putendl:\n");
	printf("attendu: Bonsoir\n\n");
	ft_putstr("obtenue: ");
	ft_putendl("Bonsoir");
	printf("\n\n");

	ft_putstr("putnbr:\n");
	printf("attendu: -2147483648\n");
	ft_putstr("obtenue: ");
	ft_putnbr(-2147483648);
	printf("\n");
	printf("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(0);
	printf("\n");
	printf("attendu: 2147483647\n");
	ft_putstr("obtenue: ");
	ft_putnbr(2147483647);
	printf("\n\n");


	ft_putstr("itoa:\n");
	printf("attendu: -2147483648\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_itoa(-2147483648));
	printf("\n");
	printf("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_itoa(0));
	printf("\n");
	printf("attendu: 2147483647\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_itoa(2147483647));
	printf("\n\n");

	ft_putstr("strdup:\n");
	printf("attendu: Bonjour\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strdup("Bonjour"));
	ft_putchar('\n');
	printf("attendu: Bon\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strdup("Bon"));
	ft_putchar('\n');
	printf("\n\n");

	ft_putstr("strlen:\n");
	printf("attendu: 7\n");
	ft_putstr("obtenue: ");
	printf("%d\n", ft_strlen("Bonjour"));
	printf("attendu: 14\n");
	ft_putstr("obtenue: ");
	printf("%d\n", ft_strlen("Hey, i'm nono!"));
	printf("\n");

	ft_putstr("strnew:\n");
	printf("attendu: a\n");
	ft_putstr("obtenue: ");
	test = ft_strnew(2);
	test[0] = 'a';
	ft_putstr( test);
	ft_putchar('\n');
	printf("attendu: b\n");
	ft_putstr("obtenue: ");
	test = ft_strnew(15);
	test[0] = 'b';
	ft_putstr(test);
	printf("\n\n");

	ft_putstr("strrev:\n");
	printf("attendu: abcdef\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strrev(ft_strdup("fedcba")));
	printf("\n\n");

	ft_putstr("memset:\n");
	printf("attendu: 11111\n");
	ft_putstr("obtenue: ");
	void *test1 = malloc(sizeof(char) * 6);
	((char*)test1)[5] = 0;
	test1 = ft_memset(test1, '1', sizeof(char) * 5);
	ft_putstr((char *)test1);
	printf("\n\n");

	ft_putstr("bzero:\n");
	printf("attendu: \n");
	ft_putstr("obtenue: ");
	ft_bzero(test1, sizeof(char) * 5);
	ft_putchar(((char *)test1)[0]);
	ft_putchar(((char *)test1)[1]);
	ft_putchar(((char *)test1)[2]);
	ft_putchar(((char *)test1)[3]);
	ft_putchar(((char *)test1)[4]);
	printf("\n\n");

	ft_putstr("memalloc:\n");
	printf("attendu: 55555555555555\n");
	ft_putstr("obtenue: ");
	test1 = ft_memalloc(sizeof(char) * 15);
	ft_putstr((char *)ft_memset(test1, '5', sizeof(char) * 14));
	printf("\n\n");

	ft_putstr("memcpy: \n");
	printf("attendu: Hey, i'm nono!\n");
	ft_putstr("obtenue: ");
	char	*tmp;
	tmp = "Hey, i'm nono!";
	ft_putstr((char *)ft_memcpy(test1, tmp, sizeof(char) * 15));
	printf("\n\n");

	ft_putstr("memccpy: \n");
	printf("attendu: ono!\n");
	ft_putstr("obtenue: ");
	ft_putstr((char *)ft_memccpy(test1, tmp, 'n', 14));
	printf("\n\n");

	ft_putstr("memmove: \n");
	ft_putstr("attendu: Rookie destroyed fnc!\n");
	ft_putstr("obtenue: ");
	tmp = "Rookie destroyed fnc!";
	test1 = ft_strnew(sizeof(char) * 22);
	ft_memmove(test1, tmp, 21);
	ft_putstr(test1);
	ft_putstr("\n\n");

	ft_putstr("memchr: \n");
	ft_putstr("attendu: destroyed fnc!\n");
	ft_putstr("obtenue: ");
	ft_putstr((char *)ft_memchr(tmp, 'd', 21));
	ft_putstr("\n\n");

	ft_putstr("memcmp: \n");
	ft_putstr("attendu: -1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_memcmp("a", "b", 2));
	ft_putchar('\n');
	ft_putstr("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_memcmp("abcd", "abcd", 5));
	ft_putchar('\n');
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_memcmp("abcde", "abcdd", 6));
	ft_putstr("\n\n");

	ft_putstr("strcpy:\n" );
	ft_putstr("attendu: Rookie destroyed fnc!\n");
	ft_putstr("obtenue: ");
	test = ft_strnew(sizeof(char) * 22);
	ft_strcpy(test, tmp);
	ft_putstr(test);
	ft_putstr("\n\n");

	ft_putstr("strncpy:\n" );
	ft_putstr("attendu: Rookie des\n");
	ft_putstr("obtenue: ");
	test = ft_strnew(sizeof(char) * 22);
	ft_strncpy(test, tmp, 10);
	ft_putstr(test);
	ft_putstr("\n\n");

	ft_putstr("strcat: \n");
	ft_putstr("attendu: FNC lose because Rookie destroyed them\n");
	ft_putstr("obtenue: ");
	tmp = "Rookie destroyed them";
	test = ft_strdup("FNC lose because ");
	ft_putstr(ft_strcat(test, tmp));
	ft_putstr("\n\n");

	ft_putstr("strncat: \n");
	ft_putstr("attendu: FNC lose because Rookie\n");
	ft_putstr("obtenue: ");
	tmp = "Rookie destroyed them";
	test = ft_strdup("FNC lose because ");
	ft_putstr(ft_strncat(test, tmp, 6));
	ft_putstr("\n\n");

	ft_putstr("strlcat: \n");
	ft_putstr("attendu: 39 FNC lose because Rook\n");
	ft_putstr("obtenue: ");
	tmp = "Rookie destroyed them";
	test = ft_strdup(" FNC lose because ");
	ft_putnbr(ft_strlcat(test, tmp, 23));
	ft_putstr(test);
	ft_putstr("\n\n");

	ft_putstr("strchr: \n");
	ft_putstr("attendu: \n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strchr("Home sweet home!", 'z'));
	ft_putchar('\n');
	ft_putstr("attendu: home!\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strchr("Home sweet home!", 'h'));
	ft_putstr("\n\n");

	ft_putstr("strrchr: \n");
	ft_putstr("attendu: \n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strrchr("Home sweet home!", 'z'));
	ft_putchar('\n');
	ft_putstr("attendu: e!\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strrchr("Home sweet home!", 'e'));
	ft_putstr("\n\n");
	
	ft_putstr("strstr: \n");
	ft_putstr("attendu: \n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strstr("Home sweet home!", ""));
	ft_putchar('\n');
	ft_putstr("attendu: \n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strstr("Home sweet home!", "haha"));
	ft_putchar('\n');
	ft_putstr("attendu: home!\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strstr("Home sweet home!", "home"));
	ft_putstr("\n\n");

	ft_putstr("strnstr: \n");
	ft_putstr("attendu: \n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strnstr("Home sweet home!", "", 12));
	ft_putchar('\n');
	ft_putstr("attendu: \n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strnstr("Home sweet home!", "home", 11));
	ft_putchar('\n');
	ft_putstr("attendu: home!\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strnstr("Home sweet home!", "home", 12));
	ft_putstr("\n\n");

	ft_putstr("strcmp: \n");
	ft_putstr("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_strcmp("Home!", "Home!"));
	ft_putchar('\n');
	ft_putstr("attendu: -1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_strcmp("Home!", "Homf!"));
	ft_putchar('\n');
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_strcmp("Home!", "Homd!"));
	ft_putstr("\n\n");

	ft_putstr("strncmp: \n");
	ft_putstr("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_strncmp("Home!", "Ho marie si tu savais!", 2));
	ft_putchar('\n');
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_strncmp("Home!", "Hn marie si tu savais!", 2));
	ft_putchar('\n');
	ft_putstr("attendu: -1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_strncmp("Home!", "Hp ijrfoierf", 2));
	ft_putstr("\n\n");

	ft_putstr("atoi: \n");
	ft_putstr("attendu: -5642\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_atoi("       -5642deuhwd5654"));
	ft_putchar('\n');
	ft_putstr("attendu: -2147483648\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_atoi("-2147483648"));
	ft_putchar('\n');
	ft_putstr("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_atoi("-+438412354"));
	ft_putchar('\n');
	ft_putstr("attendu: 2147483647\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_atoi("2147483647"));
	ft_putstr("\n\n");

	ft_putstr("isalpha: \n");
	ft_putstr("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isalpha('!'));
	ft_putstr("\n");
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isalpha('a'));
	ft_putstr("\n");
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isalpha('A'));
	ft_putstr("\n\n");

	ft_putstr("isdigit: \n");
	ft_putstr("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isdigit('!'));
	ft_putstr("\n");
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isdigit('5'));
	ft_putstr("\n\n");

	ft_putstr("isalnum: \n");
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isalnum('a'));
	ft_putstr("\n");
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isalnum('A'));
	ft_putstr("\n");
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isalnum('5'));
	ft_putstr("\n");
	ft_putstr("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isalnum('!'));
	ft_putstr("\n\n");
	
	ft_putstr("isascii: \n");
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isascii(127));
	ft_putstr("\n");
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isascii(0));
	ft_putstr("\n");
	ft_putstr("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isascii(-1));
	ft_putstr("\n");
	ft_putstr("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isascii(128));
	ft_putstr("\n\n");

	ft_putstr("isprint: \n");
	ft_putstr("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isprint(127));
	ft_putstr("\n");
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isprint('~'));
	ft_putstr("\n");
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isprint(' '));
	ft_putstr("\n");
	ft_putstr("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_isprint(0));
	ft_putstr("\n\n");
	
	ft_putstr("toupper: \n");
	ft_putstr("attendu: \n");
	ft_putstr("obtenue: ");
	ft_putchar(ft_toupper(' '));
	ft_putstr("\n");
	ft_putstr("attendu: A\n");
	ft_putstr("obtenue: ");
	ft_putchar(ft_toupper('A'));
	ft_putstr("\n");
	ft_putstr("attendu: A\n");
	ft_putstr("obtenue: ");
	ft_putchar(ft_toupper('a'));
	ft_putstr("\n\n");
	
	ft_putstr("tolower: \n");
	ft_putstr("attendu: \n");
	ft_putstr("obtenue: ");
	ft_putchar(ft_tolower(' '));
	ft_putstr("\n");
	ft_putstr("attendu: a\n");
	ft_putstr("obtenue: ");
	ft_putchar(ft_tolower('a'));
	ft_putstr("\n");
	ft_putstr("attendu: a\n");
	ft_putstr("obtenue: ");
	ft_putchar(ft_tolower('A'));
	ft_putstr("\n\n");

	ft_putstr("memdel: \n");
	test = ft_strnew(sizeof(char) * 15);
	ft_memdel((void *)&test);
	ft_putchar('\n');

	ft_putstr("strdel: \n");
	test = ft_strnew(sizeof(char) * 15);
	ft_strdel(&test);
	ft_putchar('\n');

	ft_putstr("strclr: \n");
	test = strdup("Bonjour");
	ft_strclr(test);
	int	i;
	i = -1;
	while (++i < 7)
		ft_putchar(test[i]);
	free(test);
	ft_putchar('\n');

	ft_putstr("striter: \n");
	test = ft_strdup("je n'ecris jamais en caps lock!");
	ft_putstr("attendu: JE N'ECRIS JAMAIS EM CAPS LOCK!\n");
	ft_putstr("obtenue: ");
	ft_striter(test, &ft_maj);
	ft_putstr(test);
	ft_putstr("\n\n");

	ft_putstr("strmap: \n");
	ft_putstr("attendu: je n'ecris jamais en caps lock!\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strmap(test, &ft_lower));
	ft_putstr("\n\n");

	ft_putstr("strequ: \n");
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_strequ("bonjour", "bonjour"));
	ft_putstr("\n");
	ft_putstr("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_strequ("bonjour", "bonsour"));
	ft_putstr("\n\n");

	ft_putstr("strnequ: \n");
	ft_putstr("attendu: 1\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_strnequ("bonjour", "bonsour", 3));
	ft_putstr("\n");
	ft_putstr("attendu: 0\n");
	ft_putstr("obtenue: ");
	ft_putnbr(ft_strnequ("bonjour", "bonsour", 4));
	ft_putstr("\n\n");

	ft_putstr("strsub: oops\n");
	ft_putstr("attendu: j'adore les conneries que disent les medias !\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strsub("j'adore les conneries que disent les medias", 0, 17));
	ft_putstr("\n\n");

	ft_putstr("strjoin: \n");
	ft_putstr("attendu: j'aime les brocolis!\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strjoin("j'aime les ", "brocolis!"));
	ft_putstr("\n\n");

	ft_putstr("strtrim: \n");
	ft_putstr("attendu: Hey i'm nono!\n");
	ft_putstr("obtenue: ");
	ft_putstr(ft_strtrim("    	\n Hey i'm nono!\n  \n \n "));
	ft_putstr("\n\n");

	ft_putstr("strsplit: \n");
	ft_putstr("attendu: Bonjour||a||vous||jeune||voyageur||\n");
	ft_putstr("obtenue: ");
	char	**test2;
	test2 = ft_strsplit("***Bonjour****a***vous**jeune******voyageur*", '*');
	i = 0;
	while (test2[i])
	{
		ft_putstr(test2[i]);
		ft_putstr("||");
		i++;
	}
	ft_putstr("\n\n");

	int		fd;

	fd = open("test.txt", O_CREAT | O_RDWR);
	ft_putstr_fd("attendu: H\n", fd);
	ft_putstr_fd("obtenue: ", fd);
	ft_putchar_fd('H', fd);

	ft_putstr_fd("attendu: HAHAHA\n", fd);
	ft_putstr_fd("obtenue: ", fd);
	ft_putstr_fd("HAHAHA\n", fd);
	
	ft_putstr_fd("attendu: HBHBHB\n\n", fd);
	ft_putstr_fd("obtenue: ", fd);
	ft_putendl_fd("HBHBHB\n", fd);

	ft_putstr_fd("attendu: 42\n", fd);
	ft_putstr_fd("obtenue: ", fd);
	ft_putnbr_fd(42, fd);
	close(fd);

	ft_putstr("ft_lstnew: \n");
	ft_putstr("attendu: 42\n");
	ft_putstr("obtenue: ");
	t_list	*lst_test;
	test = "42";
	lst_test = ft_lstnew(test, sizeof(int));
	ft_putstr(lst_test->content);
	ft_putstr("\n\n");

	/*ft_putstr("ft_lstdelone: \n");
	ft_putstr("attendu: ok\n");
	ft_putstr("obtenue: ");
	ft_lstdelone(&lst_test, &del);
	if (!lst_test)
		ft_putstr("ratee \n");
	else
		ft_putstr("ok\n");*/

	ft_putstr("ft_lstdel: \n");
	ft_putstr("attendu: ok\n");
	ft_putstr("obtenue: ");

}
