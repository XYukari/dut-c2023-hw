#define _CRT_SECURE_NO_WARNINGS

#include "passwd.h"
#include <string.h>
#include <stdio.h>

static char passwd[6];

int setPassword(char* setpass)
{
	size_t length = strlen(setpass);
	if (length != 6)
	{
		puts("Invalid input!\n");
		return 1;
	}
	strcpy(passwd, setpass);
	return 0;
}

int checkPassword(char* inpass)
{
	return strcmp(passwd, inpass) == 0;
}