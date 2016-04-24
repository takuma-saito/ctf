#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main(int argc, char* argv[], char* envp[]){
	printf("Welcome to pwnable.kr\n");
	printf("Let's see if you know how to give input to program\n");
	printf("Just give me correct inputs then you will get the flag :)\n");

	// stdio
	char buf[4];
	/* read(0, buf, 4); */
	/* if(memcmp(buf, "\x00\x0a\x00\xff", 4)) return 0; */
	read(2, buf, 4);
  if(memcmp(buf, "\x00\x0a\x02\xff", 4)) return 0;
	printf("Stage 2 clear!\n");

  return 0;
}

