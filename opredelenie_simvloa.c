#include <stdio.h>

int in_string(unsigned char ch, unsigned char* str);

int main() {
    unsigned char ch;
    printf("input char:");
    scanf("%c", &ch);
    unsigned char str1[] = "abcdefghijklmnopqrstuvwxyz";
    unsigned char str2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned char str3[] = "0123456789";
    if (in_string(ch, str1)) {
        printf("bukva small");
    }
    else if (in_string(ch, str2)) {
        printf("bukva big");
    }
    else if (in_string(ch, str3)) {
        printf("cifra");
    }
    else printf("simvol");
    return 0;
}

int in_string(unsigned char ch, unsigned char* str) {
    for (int counter_massiv = 0; str[counter_massiv] != '\0'; counter_massiv++) {
        if (str[counter_massiv] == ch) {
            return 1;
        }
    }
    return 0;
}
