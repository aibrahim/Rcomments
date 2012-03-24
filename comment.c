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
					while((nextc = getchar()) != '*' && nextc != EOF)
						; // Do nothing, just ignore
					while((nextc = getchar()) == '*' && nextc != EOF)
						; // just ignore it too
					if(nextc == '/')
						state = TRUE;
				}
			} else
				putchar(nextc);

		} else
			putchar(c);
	}
	
	return 0;
}
