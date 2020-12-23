#ifndef CYPHER_H
#define CYPHER_H
void mutableCaesarEncoder(char*, int);
char* immutableCaesarEncoder(const char*, int);
void mutableXorEncoder(char*, const char*);
char* immutableXorEncoder(const char*, const char*);
void mutableCaesarDecoder(char*, int);
char* immutableCaesarDecoder(const char*, int);
void mutableXorDecoder(char*, const char*);
char* immutableXorDecoder(const char*, const char*);
#endif
