#include <stdio.h>
#include <string.h>

void input_strings(char *string1, char *string2) {
    printf("Enter the first string: ");
    scanf("%s", string1);

    printf("Enter the second string: ");
    scanf("%s", string2);
}

int compare_strings(char *string1, char *string2) {
    int i = 0;
    for (i = 0; string1[i] == string2[i] && string1[i] != '\0' && string2[i] != '\0'; i++);
    if (string1[i] > string2[i]) {
        return 1; // string1 is greater
    }
    if (string2[i] > string1[i]) {
        return -1; // string2 is greater
    }
    return 0; // strings are equal
}

void output(char *string1, char *string2, int result) {
    if (result == 1) {
        printf("%s is greater\n", string1);
    } else if (result == -1) {
        printf("%s is greater\n", string2);
    } else {
        printf("Both the strings are equal\n");
    }
}

int main() {
    char str1[100], str2[100];

    input_strings(str1, str2);
    int result = compare_strings(str1, str2);
    output(str1, str2, result);

    return 0;
}