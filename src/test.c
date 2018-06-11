#include <stdio.h>
// Testing

void anotherTest(void) {
	printf("World: Hello!\n");
}

int
main(void) {
	printf("Hello World!\n");
	anotherTest();
	return 0;
}