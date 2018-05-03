//
// Created by jetbrains on 19/04/2018.
//

//only clang???

#include <stdlib.h>


int main () {

    char *x = (char*)malloc(10 * sizeof(char*));
    free(x);
    return x[5];
}

