#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef _STRINGF_H_
#define _STRINGF_H_

typedef struct string {
    char c;
    struct string *next_c;
} string;

int length(string *str);
string *constructString(char *impString);
string *stringMap(char (*mapFunc) (void *arg), string *str);
void *stringPrintLn(string *str);
void *stringPrint(string *str);

#endif