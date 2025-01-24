#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[]) {
	if (argc < 2) {
		printf("usage: ./playground <case_id>");
		exit(0);
	}
	else if (argc > 2) {
		printf("usage: ./playground <case_id>");
		exit(0);

	}
	const char *arg_string = argv[1];
	long int i = strtol(arg_string, NULL, 10);
	switch (i) {
		case 1:
			printf("FUCK YOU!");
			break;
		case 2:
			printf("nice guy eh?");
			break;
		default:
			printf("thanks for playing :)");
			break;
	}
	return 0;
}
