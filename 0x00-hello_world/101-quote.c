#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *main -Entry point
*	 prints "and that .....useful" -Dora Korpar, 2015-10-19
*		followed by a new line, to the standard error.
*/
int main(void)
{	write(2, "and that piece of artis useful\" - Dora Korpar, 2015-10-19\n",
		59);

	return (1);
}
