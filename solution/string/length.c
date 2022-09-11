#include <stdio.h>

int strlen_2(const char *str) {
    int len = 0;
    
    while (str[len] != '\0')
        len++;
        
    return len;
}

int main() {
    char *name = "Mechanical";
    
    printf("%d\n", strlen_2(name));

    return 0;
}