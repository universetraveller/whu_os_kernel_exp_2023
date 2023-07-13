#include <stdio.h>
int main(int argc, char *argv[] ){
	syscall(atoi(argv[1]));
	printf("Call %d ends", atoi(argv[1]));
}
