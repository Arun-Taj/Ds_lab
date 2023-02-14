#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	
	char* ptr;
	ptr=(char*)malloc(10);
	strcpy(ptr,"arun");
	printf("%s, Address=%u\n",ptr,ptr);
	
	ptr=(char*)realloc(ptr,20);
	strcat(ptr,"In c");
	printf("%s, Address=%u\n",ptr,ptr);
	free(ptr);
}
