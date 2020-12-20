#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdbool.h>
void mutableToUpper(char*);
char* immutableToUpper(const char*);
void mutableToLower(char*);
char* immutableToLower(const char*);
void mutableStrip(char*);
char* immutableStrip(const char*);
void mutableTrimSpace(char*);
char* immutableTrimSpace(const char*);
void mutableFilter(char*);
char* immutableFilter(const char*);
bool isStringNumber(char*);
bool isStringWord(char*);
#endif