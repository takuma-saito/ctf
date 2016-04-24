#include <stdio.h>
#include <fcntl.h>
int key1(){
	asm("mov r3, pc\n");
}

int main() {
  printf("%d", key1());
}