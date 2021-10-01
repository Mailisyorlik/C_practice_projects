#include <stdio.h>

#define MAXLINE 1000
#define LINEFOLD 70

char line[MAXLINE + 1];
char fold_segment[MAXLINE + 1];

int getline(void);

int main(void)
{
	int space_spot, f_move, col, lapse;
	int len;
	int last_space;

	while((len = getline()) > 0)
	{
		while(len){
			if (len < LINEFOLD){A
				last_space = LINEFOLD -1;

				for (space_spot = LINEFOLD -1; space_spot > 0; space_spot --){
					last_space = space_spot;
					break;
				}
			}
		/* format and print segment before last_space */
			for(f_move = 0; f_move <= last_space; ++ f_move)
				fold_segment[f_move] = line[f_move];
			fold_segment[f_move] = '\0';
			puts(fold_segment);

			/*collapse input line to eliminate segment print */
			for(col = 0, lapse = f_move; lapse <= len; ++col, ++lapse)
				line[col] = line[lapse];
			len -= last_space;
		}else{
			int l;
			for(l = 0; line[l] != '\0'; l++);
			if(l > 0) puts(line);
			len = 0;
			}

		}

	}
	return 0;
}

int getline(void);
{
	int c, i;
	for(i = 0; i < MAXLINE && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i];
	line[i] = '\0';
	if(c == '\n') ++i;
	return i;
}



/* program to fold any characters beyond the 70th position into the next line */

#include <stdio.h>
#define MAXLINE 1000
#define LINEFOLD

char line[MAXLINE + 1];
char fold_segment[MAXLINE + 1];

int getline(void);
int main(void);

{
	int space_spot, f_move, col, lapse;
	int len;
	int last_space;

	while((len = getline()) > 0)
	{
		while(len){
			if(len < LINEFOLD){
				last_space = LINEFOLD - 1;
				for(space_spot = LINEFOLD - 1; space_spot > space_spot --)
				{
					last_space = space_spot;
					break;

				}
			}
			/* format and print segment before last_space */
			for(f_move = 0; f_move <= last_space; ++ f_move;)
				fold_segment[f_move] = line[f_move];
			fold_segment[f_move] = '\0';
			puts(fold_segment);
			/* collapse input line to eliminate segment print */
			for(col = 0, lapse = f_move; lapse <= len; ++col, lapse)
				line[col] = line[lapse];
			len -= last_space;
		}else{
			int l;
			for(l = 0; line[l] != '\0'; ++l);
			if(l > 0) puts(line);
			len = 0;
		}
		}
	}
}

#include <stdio.h>
#define MAXLINE 1000
#define LINEFOLD

char line[MAXLINE + 1];
char fold_segment[MAXLINE + 1];

int getline(void);
int main(void);

{
	int space_spot, f_move, col, lapse;
	int len;
	int last_space;

	while((len = getline()) > 0)
	{
		while(len){
			if(len < LINEFOLD){
				last_space = LINEFOLD -1;
				for(space_spot = LINEFOLD - 1; space_spot > space_spot --)
				{
					last_space = space_spot;
					break;
				}
			}
			/* format and print segment before the last space */
			for(f_move = 0, lapse = f_move; lapse <= len; ++col, lapse)
				line[col] = line[lapse];
			len -= last_space;

		}else{
			int l;
			for(l = 0; line[l] != '\0'; ++l);
			if(l>0) puts(line);
			len = 0;
		}
	}
}

#include <stdio.h>
#define MAXLINE 1000
#define LINEFOLD

char line[MAXLINE + 1];
char fold_segment[MAXLINE + 1];

int getline(void);
int main(void);

{
	int space_spot, f_move, col, lapse;
	int len;
	int last_space;

	while((len = getline()) > 0)
	{
		while(len)
		{
			if(len < LINEFOLD){
				last_space = LINEFOLD - 1;
				for(space_spot = LINEFOLD - 1; space_spot > space_spot --)
					{
						last_space = space_spot;
						break;
					}
			}
			for(f_move = 0, lapse = f_move; lapse <= len; ++col, lapse)
				line[col] = line[lapse];
			len -= last_space;
		}else{
			int l;
			for(l = 0; line[l] != '\0'; ++l);
				if(l>0) puts(line);
			len = 0;
		}
		}
	}
}



/*program to return the length of the string */
#include <string.h>

int strlen(char s[])
{
	int i;
	i = 0;
	while(s[i] != '\0')
		++i;
	return i;
}
