#include <stdio.h>

int main(int argc, char const *argv[]) {
    char c = 'l'; int i = 5; long l = 7;
    printf("%p\n", &c);  printf("%p\n", &i); printf("%p\n", &l);
    printf("%lu\n", &c); printf("%lu\n", &i); printf("%lu\n", &l);

    char *pc = &c; int *pi = &i; long *pl = &l;
    printf("%p\n", pc);  printf("%p\n", pi); printf("%p\n", pl);

    *pc = 'a'; *pi = 2; *pl = 3;
    printf("%c\n", c);  printf("%d\n", i); printf("%ld\n", l);

    unsigned int ui = 123; int *ipui = &ui; char *cpui = &ui;
    printf("ipui: %p points to %u\n", ipui, *ipui); printf("cpui: %p points to %u\n", cpui, *cpui);
    printf("%x\n", ui); printf("%u\n", ui);

    char *pc2 = &ui;
    int j;
    for(j = 0; j < 4; j++){
        printf("%p: %hhu ", pc2, *pc2);
        pc2++;
    }
    printf("\n");

    pc2 = &ui;
    for(j = 0; j < 4; j++){
        (*pc2)++;
        printf("%x %u\n", ui, ui);
        pc2++;
    }
    printf("\n");

    pc2 = &ui;
    for(j = 0; j < 4; j++){
        (*pc2) += 16;
        printf("%x %u\n", ui, ui);
        pc2++;
    }
    printf("\n");



    return 0;
}
