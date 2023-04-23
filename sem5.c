#include <stdio.h>
#include "find2sem5.c"
#include "findsem5.c"
#include "vvodfirstsymbl.c"

int mainin() {

    char s1[100], s2[100];
    puts("Введите 2 строки")
    input(s1);
    input(s2);
    printf("%d", finder(s1, s2));
}
