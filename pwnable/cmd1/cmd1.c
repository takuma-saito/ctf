#include <stdio.h>
#include <string.h>

int filter(char* cmd){
	int r=0;
	r += strstr(cmd, "flag")!=0;
  printf("flag: %d\n", r);
	r += strstr(cmd, "sh")!=0;
  printf("sh: %d\n", r);
	r += strstr(cmd, "tmp")!=0;
  printf("tmp: %d\n", r);
	return r;
}
int main(int argc, char* argv[], char** envp){
	putenv("PATH=/fuckyouverymuch");
	if(filter(argv[1])) return 0;
	system( argv[1] );
	return 0;
}

