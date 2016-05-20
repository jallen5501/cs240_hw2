/* John Allen...

-getline from book, (slightly modified by me).

while(getline() returns a line)
	use the length of the line
	parse through the line, starting at the end
	stop parsing when program finds a readable char	
	add \n and \0 characters immediately after the last readable char in 	    the line
*/


#include <stdio.h>

int getline1 (char s[]);

int main(void) {
    int len, i;
    char line[1000];

    while ((len = getline1(line)) >  0) {
        if (len > 1) {
		i = len - 1;
            	while (line[i] == ' ' || line[i] == '\t' || line[i] == '\n')
                	i--;
            	line[++i] = '\n';
            	line[++i] = '\0';
            	printf("%s", line);
        }
    }
    return 0;
}

int getline1(char s[]) {
    int i, c;
    for (i=0;(c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

