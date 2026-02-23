#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

struct token{
    int token;
    int intval;
};

enum {
    T_PLUS, T_MINUS, T_STAR, T_SLASH, T_INTLIT
};