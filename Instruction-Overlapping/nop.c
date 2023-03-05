#include <stdio.h>

extern int overlapping(void);

int main() {
	printf("%d\n", overlapping());
	printf("%d\n", (overlapping + 5)());
}

