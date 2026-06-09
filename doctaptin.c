#include <stdio.h>
int main() {
    FILE *f = fopen("data.txt", "r");
    char s[100];
    fgets(s, 100, f);
    printf("%s", s);
    fclose(f);
    return 0;
}
