#include <stdio.h>
#include <stdlib.h>
int main(void) {
	
	int nc=0;
	char c=getchar();
	while(c!=EOF)
{   nc++;
	putchar(c);
    c=getchar();
}
printf("%d\n",nc/2);

	return 0;
}
