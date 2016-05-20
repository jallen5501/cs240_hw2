/* John Allen

-getline from book, (slightly modified by me).
main{
while(getline() returns a line)
	use a function *reverse(char[])* to reverse the line
	print the reversed line
	}
reverse line function{
	use two integers- one will heold the length of each line and the oth	    er with represent the first char index in a line.
	use a char, (temp) to help swap chars from the from the first and se
	cond halves of each line
}
*/
#include<stdio.h>

void reverse(char s[]);
int getline1(char s[]);

int main(void){
  
    int len, i;
    char line[1000];

    while ((len = getline1(line)) >  0) {
        if (len > 1) {
            reverse(line);
            printf("%s\n", line);
        }
    }
    return 0;
}

void reverse(char s[]) {
    int k, j;
    char temp;

    for (j = 0; s[j] != '\0'; ++j)
        ;
    --j;

    for (k = 0; k < j; k++) {
        temp = s[k];
        s[k] = s[j];
        s[j] = temp;
        --j;
    }
}

int getline1(char s[]){
    int i, c;
    for (i=0;(c=getchar())!=EOF && c!='\n'; ++i){
        s[i] = c;
    }
    if (c == '\n'){
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

