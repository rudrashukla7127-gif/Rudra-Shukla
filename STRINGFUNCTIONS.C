#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    int len, cmp;

    // 1. Length of string
    len = strlen(str1);
    printf("Length of str1: %lu\n", len);

    // 2. Copy string
    strcpy(str3, str1);
    printf("Copied string (str3): %s\n", str3);

    // 3. Concatenate strings
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // 4. Compare strings
    cmp = strcmp(str1, str2);
    if(cmp == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // 5. Reverse string
    char rev[100];
    int i, j;
    int len1 = strlen(str1);

    for(i = 0, j = len1 - 1; j >= 0; i++, j--) {
        rev[i] = str1[j];
    }
    rev[i] = '\0';
    printf("Reversed string: %s\n", rev);

    // 6. Palindrome check
    char pal[100] = "madam";
    int flag = 0;
    int l = strlen(pal);

    for(i = 0; i < l / 2; i++) {
        if(pal[i] != pal[l - i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("%s is Palindrome\n", pal);
    else
        printf("%s is Not Palindrome\n", pal);

    // 7. Uppercase
    char up[100] = "hello";
    for(i = 0; up[i] != '\0'; i++) {
        if(up[i] >= 'a' && up[i] <= 'z')
            up[i] = up[i] - 32;
    }
    printf("Uppercase: %s\n", up);

    // 8. Lowercase
    char low[100] = "HELLO";
    for(i = 0; low[i] != '\0'; i++) {
        if(low[i] >= 'A' && low[i] <= 'Z')
            low[i] = low[i] + 32;
    }
    printf("Lowercase: %s\n", low);

    return 0;
}
