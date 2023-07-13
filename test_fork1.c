#include <stdio.h>
int main(){
	for(int i=0; i < 3; ++i){
		int pid = fork();
		if(pid){
			printf("I'm father proc, PID: %d, i create pid %d\n", getpid(), pid);
		}else{
			printf("I'm child proc, PID: %d\n", getpid());
		}
	}
}
