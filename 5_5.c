#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int count[256] = {0}; 

     fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; 

    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0'; 

    for (int i = 0; i < strlen(s); i++) {
        count[(int)s[i]]++;
    }
    
    for (int i = 0; i < strlen(t); i++) {
        count[(int)t[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c %d\n", i, count[i]);
        }
    }

    return 0;
}

