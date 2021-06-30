#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stringF.h"


char addOne(void *args) {
    return ((char) *((char *)args)) + 1;
}

bool isEven(void *args) {
    char c = (char) * ((char *) args);
    if ((c % 2) == 0) {
        return true;
    }

    return false;
}

int main (int argc, char **argv) {
    string *newString = constructString("123456");
    string *mapNewString = stringMap(addOne, newString);
    string *filterNewString = stringFilter(isEven, newString); 

    printf("\n");
    stringPrintLn(newString);
    stringPrintLn(mapNewString);
    stringPrintLn(filterNewString);

    

    return 0;
}