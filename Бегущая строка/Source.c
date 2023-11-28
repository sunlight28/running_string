#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#define MAX_LENGTH 80

void print_string(char* str) {
    int i, j;
    for (i = 0; i <= 79 - strlen(str); i++) {
        for (j = 0; j < i; j++) {
            putchar(' ');
        }
        puts(str);
        Sleep(75);
        system("cls");
    }
}

int main(void)
{
    system("chcp 1251 >> null");
    char* word = (char*)malloc(sizeof(char) * MAX_LENGTH);
    printf("¬ведите строку > ");
    gets(word);
    word = realloc(word, sizeof(char) * strlen(word) + 1);
    int i, j;
    j = 0;
    printf("¬ведите колицество циклов > ");
    scanf_s("%d", &i);
    do {
        print_string(word);
        j++;
    } while (j != i);
    free(word);
    return 0;
}
