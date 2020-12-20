#include <stdio.h>
#include <string.h>
#include "cypher.h"

void mutableCaesar(char* str, int offset) {
	char f;
	int i;
	for (i = 0; str[i] != '\0'; ++i) {
		f = (str[i] + offset) % ASCII_SIZE;
		if (f >= 0 && f <= ASCII_DIF) {
			str[i] = f + ASCII_DIF;
		}
		else {
			str[i] = f;
		}
	}
}

char* immutableCaesar(const char* str, int offset) {
	char* strCopy = malloc((strlen(str) + 1) * sizeof(char));
	strcpy(strCopy, str);
	mutableCaesar(strCopy, offset);
	return strCopy;
}

void mutableXor(char* str, const char* key){
	int n = strlen(str);
	int nKey = strlen(key);
	char f;
	int i;
	for (i = 0; i < n; ++i) {
		f = str[i] ^ key[i % nKey];
		if (f >= 0 && f <= ASCII_DIF) {
			str[i] = f + ASCII_DIF;
		}
		else{
			str[i] = f;
		}
	}
}

char* immutableXor(const char* str, const char* key){
	char* strCopy = malloc((strlen(str) + 1) * sizeof(char));
 	strcpy(strCopy, str);
	mutableXor(strCopy, key);
 	return strCopy;
}
