#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// you may ignore the following two lines
#pragma GCC diagnostic ignored "-Wpragmas"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"

int fake_string = 124123;

void iterate(void) {
	int i;
    int j = 0;
	int* arr = (int *) malloc(100 * sizeof(int));
    char *char_arr = (char *) malloc(100 * sizeof(char));
    
	for (i = 0; i < 100; i++) {
		arr[i] = i;
		char_arr[i] = 'a';
        ++j;
	}

    /* Watchpoints demo */
    j = 0;
    for (i = 0; i < 5; i++) {
        j = 0;
        j = 1;
        int k = j;
    }
}

void frame(void) {
    int upper = 10;
    iterate();
}

int main(int argc, char** argv) {
	int upper = 100;
    frame();
	return 0;
}

