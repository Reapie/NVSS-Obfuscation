#include <stdio.h>
#include <string.h>

char state = 0;
char data[32];

/*
// Original Program

int main() {
	scanf("%s", data);
	if (!strcmp(data, "Cisco123")) {
		puts("Correct!");
	} else {
		puts("Wrong!");
	}
}
 
*/

int main(int argc, char *argv[]) {
	
	while (state || argc < 0) {
		++*data;
	}
	char* s1 = "1234\x0056";
	char* s2 = "Cisco123\x00";
	while (data) {
		switch (state) {
			case -1: strcpy(data, s1);
			case 0: strcpy(data, s2);
			case 1: state += 4; break;
			case 2: strcmp(data, "1234"); break;
			case 3:
				puts("Correct!");
				return 1;
			case 4: {
				if (state)
					scanf("%s", (data+9));
			}
			case 13: {
				switch (strcmp(data+9, data)) {
					case 0: puts("Correct!"); return 0;
					default: puts("Wrong!"); return 1;
				}
			}
		}
	}
}