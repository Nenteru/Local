#include <stdio.h>
#define GROUP_SMALL_LETTER 1
#define GROUP_CAPITAL_LETTER 2
#define GR0UP_NUMBER 3
#define GR0UP_SYMBOL 0

int in_string(unsigned char ch, unsigned char* str);
int classify_char(unsigned char ch);

int main() {
    unsigned char ch;
    printf("input char:");
    scanf("%c", &ch);
    int h = classify_char(ch);
    printf("%d", h);
}

int classify_char(unsigned char ch) {
    unsigned char str1[] = "abcdefghijklmnopqrstuvwxyz";
    unsigned char str2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned char str3[] = "0123456789";
    if (in_string(ch, str1)) {
        return GROUP_SMALL_LETTER;
    }
    if (in_string(ch, str2)) {
        return GROUP_CAPITAL_LETTER;
    }
    if (in_string(ch, str3)) {
        return GR0UP_NUMBER;
    }
    return GR0UP_SYMBOL;
}

int in_string(unsigned char ch, unsigned char* str) {
    for (int counter_massiv = 0; str[counter_massiv] != '\0'; counter_massiv++) {
        if (str[counter_massiv] == ch) {
            return 1;
        }
    }
    return 0;
}
