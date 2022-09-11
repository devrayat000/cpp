#include <stdio.h>
#include <string.h>

char* substr(const char *str, int start, int end) {
    int length = end - start;
    char *sub = malloc(length * sizeof(char));
    
    if (sub == NULL) {
        printf("Unable to allocate memory.");
        exit(1);
    }
    
    for (int c = 0; c < length; c++) {
        *(sub + c) = *(str + start + c);
    }
    *(sub + length) = "\0";
    return sub;
}

int main() {
    char *name = "Mechanical";
    
    for (int r = 1; r <= strlen(name); r++) {
        printf("%s\n", substr(name, 0, r));
    }

    return 0;
}