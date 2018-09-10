// source.c
#define _CRT_SECURE_NO_WARNINGS // don't worry about scanf
#define _CRTDBG_MAP_ALLOC	// need this to get the line identification
//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF); // in main, after local declarations
//NB must be in debug build

#include <crtdbg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char arry[] = "hello world";
	char c;
	char *str;
 	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
	
	str = malloc(strlen(arry)+1);
	strcpy(str, arry);
	printf("%s\n", str);
	scanf("%c", &c);

	free(str);

	return 0;
}