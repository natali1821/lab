#ifndef CYPHER_H
#define CYPHER_H
#define ASCII_SIZE 256
#define ASCII_DIF 32
void mutableCaesar(char*, int);
char* immutableCaesar(const char*, int);
void mutableXor(char*, const char*);
char* immutableXor(const char*, const char*);
#endif
