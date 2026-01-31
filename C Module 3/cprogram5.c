/*Find the longest substring with

No repeating characters

At least one digit

(Simple logic – suitable for exams)*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], sub[100], longest[100];
    int i, j, k, max = 0;

    printf("Enter string: ");
    gets(str);

    for (i = 0; i < strlen(str); i++) {
        int visited[256] = {0};
        int hasDigit = 0;
        k = 0;

        for (j = i; j < strlen(str); j++) {
            if (visited[str[j]] == 1)
                break;

            visited[str[j]] = 1;
            sub[k++] = str[j];

            if (isdigit(str[j]))
                hasDigit = 1;

            sub[k] = '\0';

            if (hasDigit && k > max) {
                max = k;
                strcpy(longest, sub);
            }
        }
    }

    printf("Longest substring: %s", longest);
    return 0;
}
 