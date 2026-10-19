#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    char c;
    scanf("%c", &c);

    switch (c) {
    case '.': printf("Точка"); break;
    case ',': printf("Запятая"); break;
    case '!': printf("Восклицательный знак"); break;
    case '?': printf("Вопросительный знак"); break;
    default: printf("Неизвестный знак препинания");
    }

    return 0;
}