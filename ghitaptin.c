#include <stdio.h>
int main() {
    FILE *f = fopen("data.txt", "w");
    fprintf(f, "Hello Linux");
    fprintf(f, "Hello ban den voi lap trinh Linux!");
    fclose(f);
    return 0;
}
