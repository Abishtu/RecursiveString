#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stringF.h"

int length(string *str) {
    if (str->next_c == NULL) {
        return 0;
    }

    return 1 + length(str->next_c);
}

string *constructString(char *impString) {
    string *str = (string*) malloc(sizeof(string));
    if(*impString == '\0') {
        str->c = *impString;
        str->next_c = NULL;
        return str;
    }
    str->c = *impString;
    str->next_c = constructString(impString+1);

    return str;
}

string *stringMap(char (*mapFunc) (void *arg), string *str) {
    string *newStr = (string *) malloc(sizeof(string));
    if (str->c == '\0') {
        return str;
    }
    newStr->c = mapFunc(&str->c);
    newStr->next_c = stringMap(mapFunc, str->next_c);

    return newStr;
}

void *stringPrintLn(string *str) {
    if (str->next_c == NULL) {
        fprintf(stdout, "%c\n", str->c);
        fflush(stdout);
        return NULL;
    }
    fprintf(stdout, "%c", str->c);
    fflush(stdout);
    stringPrintLn(str->next_c);

    return NULL;
}

void *stringPrint(string *str) {
    if (str->next_c == NULL) {
        fprintf(stdout, "%c", str->c);
        fflush(stdout);
        return NULL;
    }
    fprintf(stdout, "%c", str->c);
    fflush(stdout);
    stringPrintLn(str->next_c);

    return NULL;
}