#include <stdio.h>

#define TRUE  1
#define FALSE 0

int
main()
{
	int c, nextc;
	int state;
	
	while((c = getchar()) != EOF) {
		if(c == '/') {
			if((nextc = getchar()) == '*') {
				state = FALSE;
				while(!state) {
					while((nextc = getchar()) != '*')
						; // Do nothing, just ignore
					while((nextc = getchar()) == '*')
						; // just ignore it too
					if(nextc == '/')
						state = TRUE;
				}
			}
		} else
			printf("%c", c);
	}
	
	return 0;
}
