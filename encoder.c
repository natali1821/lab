#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "functions.h"
#include "cypher.h"

int main(int argc, char* argv[]) {
	if (argc != 4 || argc != 1) {
		printf("Error: invalid number of arguments");
		exit(1);
	}
	if (argc == 1) {
		printf("Choose encoding method: 1 - caesar, 2 - xor");
		int n;
		scanf("%d", &n);
		printf("String:");
		char* str = malloc(100 * sizeof(char));
		scanf("%100s", str);
		str = (char*)malloc((strlen(str) + 1) * sizeof(char));
		printf("Key:");
		int offset;
		scanf("%d", &offset);
		if (n == 1) {
			mutableToLower(str);
			mutableCaesar(str, offset);
			printf("Encoded string: %s", str);
		}
		if (n == 2) {
			mutableToLower(str);
			mutableXOREncod(str, key);
			printf("Encoded string: %s", str);
		}
		free(str);
	}
	if (argc == 4) {
		if (strcmp(argv[1], "caesar") == 0) {
			char* str = malloc(strlen(argv[2]) * sizeof(char));
			strcpy(argv[2], str);
			mutableStrip(str);
			mutableToLower(str);
			if (isStringNumber(argv[3]) == true){
				int offset = atoi(argv[3]);
			}
			else {
				printf("Offset must be an integer");
				exit(1);
			}
			mutableCaesar(str, offset);
			printf("Encoded string: %s", str);
			free(str);
		}
		if (strcmp(argv[1], "xor") == 0) {
      			char* str = malloc(strlen(argv[2]) * sizeof(char));		
			strcpy(argv[2], str);
			char* key = malloc(strlen(argv[3]) * sizeof(char));
			strcpy(argv[3], key);
			mutableStrip(str);
			mutableToLower(str);
			mutableXOR(str, key);
			printf("Encoded string: %s", str);
			free(str);
			free(key);
		}
	return 0;
}