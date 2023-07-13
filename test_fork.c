#include <stdio.h>
int main(){
	for(int i=0; i < 3; ++i){
		int pid = fork();
		if(pid){
			printf("PID: %d\n", pid);
		}
	}
}
