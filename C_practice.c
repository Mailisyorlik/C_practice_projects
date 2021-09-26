#include <stdio.h>

int power(int m, int n);
main()
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2, i), power(-3, i));
	return 0;
}
int power(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i)
		p = p*base;
	return p;
}



#include <stdio.h>

int power(int m, int n);
main()
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2, i), power(-3, i));
	return 0;
}
int power(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i)
		p = p*base
	return p;
}



/* character arrays */ 

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/*print longest input line */
main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
	return 0;
}

int getline(char s[], int lim)
{
	inc c, i;

	for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while((to[i] - from[i]) != '\0')
		++i;
	}

}
}


