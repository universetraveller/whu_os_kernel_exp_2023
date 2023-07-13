#include <stdio.h>
int main(int argc, char *argv[]){
	printf("use <%s>\n", argv[1]);
	int ret = syscall(224, argv[1], 0x8000);
	printf("ret code is %d\n", ret);
}
