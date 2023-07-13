#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define PAGE_SIZE 4096


int main(int argc, char**argv) {
    int fd;
    int i;
    unsigned char *p_map;

    for(int i = 50; i < 3000; i+=30){
    p_map = (unsigned char *)mmap(0, PAGE_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, i, 0);
    }
}
