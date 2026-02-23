#include "defs.h"
#include "data.h"
void main(int argc, char *argv[]){
    init();

    Infile = fopen(argv[1], "r");

    scanfile();
    exit(0);
}
char *tokstr[] = {"+","-","*", "/", "intlit"};
static void scanfile(){
    struct token T;
    while(scan(&T)){
        printf("Token %s",tokstr[T.token]);
        if(T.token == T_INTLIT)
            printf(",value %d", T.intval);
        printf("/n");
    }
}