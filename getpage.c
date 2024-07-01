#include <stdio.h>
#include <unistd.h>

int main(){
	int psize = getpagesize();
	printf("page size is %d\n", psize);
}
