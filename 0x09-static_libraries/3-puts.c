#include <stdio.h>

void my_puts(const char *str) {
	    if (str != NULL) {
		            while (*str != '\0') {
				                putchar(*str);
						            str++;
							            }
			            putchar('\n'); // Add a newline character for a line break
				        }
}
