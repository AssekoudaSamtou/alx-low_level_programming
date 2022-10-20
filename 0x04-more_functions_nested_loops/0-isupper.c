#include <stdio.h>
#include <ctype.h>

int _isupper(int c) {
	unsigned int result = isupper(c);

	if (result == 0)
		return 0;
	else
		return 1;
}
