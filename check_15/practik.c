#include <stdio.h>

int main(void) {
    char s[] = "Hello, World!";

    FILE *f = fopen("file.txt", "wb");
    if(f != NULL) {
        fwrite(s, sizeof(s[0]), sizeof(s) / sizeof(s[0]), f);
    }
    return 0;
}