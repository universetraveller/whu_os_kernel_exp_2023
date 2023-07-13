#include <stdio.h>
int main(int argc, char* argv[]){
	if(argv[1] == 'w'){
		FILE *fp = NULL;
	   char buff[65530];
	   fp = fopen("/tmp/test.txt", "w+");
		for(int i = 0; i < 1000; ++i){
	fprintf(fp, "This is testing for fprintf...\n");
		}
	fclose(fp);
	}else{
		for(int i = 0; i < 1000; ++i){
		FILE *fp = NULL;
	   char buff[65530];
	   fp = fopen("/tmp/test.txt", "w+");
	   fscanf(fp, "%s", buff);
		}
	}
}
