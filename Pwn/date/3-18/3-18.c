#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void yy()
{
setvbuf(stdout,0,_IONBF,0);
srand(time(0)^getpid());
char buf[100];
int magic =rand();
gets(buf);
if(atoi(buf)==magic)
{
	puts("luckydog...");
}
}
int main()
{
	yy();	
}
