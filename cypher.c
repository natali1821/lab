#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "cypher.h"

void mutableCaesarEncoder(char* str, int offset) {
	char f;
	int i;
	for (i = 0; str[i] != '\0'; ++i) {
		f = (str[i] + offset) % 256;
		if (f >= 0 && f <= 32) {
			str[i] = f + 32;
		}
		else {
			str[i] = f;
		}
	}
}

char* immutableCaesarEncoder(const char* str, int offset) {
	char* strCopy = malloc((strlen(str) + 1) * sizeof(char));
	strcpy(strCopy, str);
	mutableCaesarEncoder(strCopy, offset);
	return strCopy;
}

void mutableXorEncoder(char* str, const char* key){
	int n = strlen(str);
	int nKey = strlen(key);
	char f;
	int i;
	for (i = 0; i < n; ++i) {
		f = str[i] ^ key[i % nKey];
		if (f >= 0 && f <= 32) {
			str[i] = f + 32;
		}
		else{
			str[i] = f;
		}
	}
}

char* immutableXorEncoder(const char* str, const char* key) {
	char* strCopy = malloc((strlen(str) + 1) * sizeof(char));
 	strcpy(strCopy, str);
	mutableXorEncoder(strCopy, key);
 	return strCopy;
}

void mutableCaesarDecoder(char* str, int offset) {
    mutableCaesarEncoder(str, -offset);
}

char* immutableCaesarDecoder(const char* str, int offset) {
    return immutableCaesarEncoder(str, -offset);
}

void mutableXorDecoder(char* str, const char* key) {
    mutableXorEncoder(str, key);
}

char* immutableXorDecoder(const char* str, const char* key) {
    return immutableXorEncoder(str, key);
}
