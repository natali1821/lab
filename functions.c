#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "functions.h"

void mutableToUpper(char* str) {
	int i;
	for (i = 0; str[i] != '\0'; ++i) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= ('a'-'A');

		}
	}
}

char* immutableToUpper(const char* str) {
	int n = strlen(str) + 1;
	char* strCopy = malloc(n * sizeof(char));
	strcpy(strCopy, str);
	mutableToUpper(strCopy);
	return strCopy;
}

void mutableToLower(char* str){
	int i;
	for (i = 0; str[i] != '\0'; ++i) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += ('a'-'A');
		}
	}
}

char* immutableToLower(const char* str) {
	int n = strlen(str) + 1;
	char* strCopy = malloc(n * sizeof(char));
	strcpy(strCopy, str);
	mutableToLower(strCopy);
	return strCopy;
}

void mutableStrip(char* str) {
	int f = 0;
	int i = 0;
	for (i = 0; i < strlen(str); ++i) {
		if (str[i] != ' ') {
			str[f] = str[i];
			++f;
		}
	}
	str[f] = '\0';
}

char* immutableStrip(const char* str){
	int n = strlen(str) + 1;
	char* strCopy = malloc(n * sizeof(char));
	strcpy(strCopy, str);
	mutableStrip(strCopy);
	return strCopy;
}

void mutableTrimSpace(char* str) {
	int f = 0;
	int k = 0;
	while (str[f] != '\0') {
		if (str[f] != ' ') {
			str[k] = str[f];
			++k;
		}
		++f;
	}
	str[k] = '\0';
}

char* immutableTrimSpace(const char* str) {
	int n = strlen(str) + 1;
	char* strCopy = malloc(n * sizeof(char));
	strcpy(strCopy, str);
	mutableTrimSpace(strCopy);
	return strCopy;
}

void mutableFilter(char* str) {
	int i = 0;
	int k = 0;
	while (str[i] != '\0') {
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9') || (str[i] == ' '))
		{
			str[k] = str[i];
			++k;
		}
		++i;
	}
	str[k] = '\0';
}

char* immutableFilter(const char* str) {
	int n = strlen(str) + 1;
	char* strCopy = malloc(n * sizeof(char));
	strcpy(strCopy, str);
	mutableFilter(strCopy);
	return strCopy;
}

bool isStringNumber(char* str) {
	int i;
	for (i = 0; str[i] != '\0'; ++i) {
		if (!(str[i] >= '0' && str[i] <= '9')) {
			return false;
		}
	}
	return true;

}

bool isStringWord(char* str){
	int i;
	for (i = 0; str[i] != '\0'; ++i) {
		if (!((str[i] >= 'a' && str[i] <= 'z')
			   || (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return false;
		}
	}
	return true;
}
