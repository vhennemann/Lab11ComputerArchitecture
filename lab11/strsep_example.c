#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	char *my_string, *ptr_to_free, *token;
	const char* delimiter = " ";

	my_string = strdup("Hi this is a test");
        ptr_to_free = my_string;

	if(my_string == NULL) {
		printf("Error, strdup returned null\n");
		return 1;
	}

	token = strsep(&my_string, delimiter);
	while(token != NULL) {
		printf("Token: %s\n", token);
		token = strsep(&my_string, delimiter);
	}

	free(ptr_to_free);
	return 0;
}

