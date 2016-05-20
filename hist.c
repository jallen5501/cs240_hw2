/* John Allen

declare an int array[128] and set the value at each index to 0.
declare a char[] representing the achii table
while(getchar!=EOF)
	++int array[index = (int)getchar]

for(each index of int array[])
	if(array[index]!=0)
		printf(ACHII#,ASCII NAME, &int array[index])

*/

#include<stdio.h>
int main(){

int scoreboard[128];
int i, j;
for(i=0;i<128;i++)
	scoreboard[i]=0;	

	int a;
	char asciiname[] =
        "NUL\0"  "SOH\0"  "STX\0"  "ETX\0"  "EOT\0"  "ENQ\0"  "ACK\0"  "BEL\0"
        " BS\0"  " HT\0"  " NL\0"  " VT\0"  " NP\0"  " CR\0"  " SO\0"  " SI\0"
        "DLE\0"  "DC1\0"  "DC2\0"  "DC3\0"  "DC4\0"  "NAK\0"  "SYN\0"  "ETB\0"
        "CAN\0"  " EM\0"  "SUB\0"  "ESC\0"  " FS\0"  " GS\0"  " RS\0"  " VS\0"
        " SP\0"  "  !\0"  "  \"\0" "  #\0"  "  $\0"  "  %\0"  "  &\0"  "  '\0"
        "  (\0"  "  )\0"  "  *\0"  "  +\0"  "  ,\0"  "  -\0"  "  .\0"  "  /\0"
        "  0\0"  "  1\0"  "  2\0"  "  3\0"  "  4\0"  "  5\0"  "  6\0"  "  7\0"
        "  8\0"  "  9\0"  "  :\0"  "  ;\0"  "  <\0"  "  =\0"  "  >\0"  "  ?\0"
        "  @\0"  "  A\0"  "  B\0"  "  C\0"  "  D\0"  "  E\0"  "  F\0"  "  G\0"
        "  H\0"  "  I\0"  "  J\0"  "  K\0"  "  L\0"  "  M\0"  "  N\0"  "  O\0"
        "  P\0"  "  Q\0"  "  R\0"  "  S\0"  "  T\0"  "  U\0"  "  V\0"  "  W\0"
        "  X\0"  "  Y\0"  "  Z\0"  "  [\0"  "  \\\0" "  ]\0"  "  ^\0"  "  _\0"
        "  `\0"  "  a\0"  "  b\0"  "  c\0"  "  d\0"  "  e\0"  "  f\0"  "  g\0"
        "  h\0"  "  i\0"  "  j\0"  "  k\0"  "  l\0"  "  m\0"  "  n\0"  "  o\0"
        "  p\0"  "  q\0"  "  r\0"  "  s\0"  "  t\0"  "  u\0"  "  v\0"  "  w\0"
        "  x\0"  "  y\0"  "  z\0"  "  {\0"  "  |\0"  "  }\0"  "  ~\0"  "DEL\0"
        ;

	while ((a=getchar()) != EOF){
		++scoreboard[a];
	}
	
	printf("DEC\tHEX\tASCII NAME\tCOUNT\n");
	
	for(j=0;j<128;j++){
		if(scoreboard[j] !=0)
		printf("%3d\t%3x\t%s\t\t%5d\n",j,j,&asciiname[4*j],scoreboard[j]);
	}
}

