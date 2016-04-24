#include <stdio.h>
#include <fcntl.h>

int main() {
	char pw_buf[11];
  int fd = open("password",O_RDONLY,0400);
  read(fd,pw_buf,10);
  printf("%s\n", pw_buf);
}