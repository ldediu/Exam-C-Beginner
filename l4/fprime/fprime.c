#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int num;
    int i = 1;

    if (ac == 2)
    {
        num = atoi(av[1]);
        if (num == 1)
            printf("1");
        while (++i <= num)
		{
            if (num % i == 0)
			{
                printf("%d", i);
                if (num == i)
                    break ;
                printf("*");
				num /= i;
				i = 1;
			}
		}
    }
    printf("\n");
    return 0;
}