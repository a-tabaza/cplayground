#include <stdio.h>
#include <stdlib.h>
#include <magic.h>

int main(int argc, char* argv[], char* envp[]) {
	if (argc < 2) {
		printf("[IDIOT] usage: ./playground <arguement>");
		exit(1);
	}
	else if (argc > 2) {
		printf("[IDIOT] usage: ./playground <arguement>");
		exit(1);

	}

//	initiate magic db and provide a pointer to it
	magic_t magic_cookie;
	magic_cookie = magic_open(MAGIC_MIME);

	if (magic_cookie == NULL) {
		printf("[ERROR] Error allocating magic cookie");
		exit(1);
	}

	printf("Process of obtaining Magic Cookie complete.\nPointer to Magic Cookie: %p\n", magic_cookie);

//	read file via file_path provided as an arguement
//	const char *file_name_arg = argv[1];
//	FILE *file;
//	file = fopen(file_name_arg, "r");
//
//	if (file == NULL) {
//		printf("[FOOL] Error opening file.");
//		exit(1);
//	}
//	printf("File opened successfully. It is located at %p.\n", file);
//	fclose(file);
//	printf("File Gone!\n");



//	determine file type using magic, return it as mime type

	const char * file_name_arg = argv[1];
	printf("argv[1] = %s\n", file_name_arg);
	const char * description;
	description = magic_file(magic_cookie, file_name_arg);

	if (description == NULL) {
		printf("[DUMDUM] Error using Magic Numbers: %s", magic_error(magic_cookie));
	}
	printf("%s \n", description);

	magic_close(magic_cookie);
	printf("Magic Cookie Gone!\n");
	return 0;
}
