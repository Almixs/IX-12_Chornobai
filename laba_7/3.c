#include <stdio.h>
#include <string.h>

#define PRAISE "О, яке чудове ім'я!"

int main() {
    char name[50];
    printf("Як Вас звати?\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Привіт, %s. %s\n", name, PRAISE);
    printf("Ваше ім'я складається з %zu літер і займає %zu комірок пам'яті.\n", strlen(name), sizeof(name));
    printf("Вигадана фраза складається з %zu літер і займає %zu комірок пам'яті.\n", strlen(PRAISE), sizeof(PRAISE));
    return 0;
}
