#include <stdio.h>
#include <ctype.h>
int x = 1, y = 2, z[10];
int *ip; /* ip is a pointer to int */

ip = &x; /* ip now points to &x */
y = *ip; /* y is now 1 */
*ip = 0; /* x is now 0 */

/* every pointer points to a specific data type */
/* a swapping routine is a good example of why pointers are important */
void swap(int x, int y){
    int temp; 
    temp = x;
    x = y;
    y = temp;
    
}
/* this is a call by value, which C does not allow */

void swap(int *px, int *py)
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;

}

int getch(void);
void ungetch(int);

/* getint: get next integer from input to *pn */
int getint(int *pn)
{
    int c, sign;
    while (isspace(c = getch()); /*this skips white space */
    if (!isdigit(c) && c != EOF && c != '+' && c !='-'){
        ungetch(c); /*its not a number....*/
        return 0;
    }
}
