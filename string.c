#include <stdio.h>

int main () {
    char name1[100];
    char name2[100];

    scanf("%[^\n]", name1);
    scanf(" %[^\n]", name2);

    printf("%1.2s", name1);
    printf("%10.1s", name2);

    return 0;
}