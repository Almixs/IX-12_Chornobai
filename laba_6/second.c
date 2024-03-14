#include <stdio.h>

int main() {
  int vik;
  char name[30];
  char gender;

  printf("Введіть ваш вік?\n");
  scanf("%d", &vik);
  printf("Введіть ваше ім'я\n");
  scanf("%29s", name);

  printf("Ваша стать (М - чоловіча, Ж - жіноча): \n");
  scanf(" %c", &gender);

  if (gender == 'M') {
    printf("Привіт, %s, якому %d років.\n", name, vik);
  } else if (gender == 'Ж') {
    printf("Привіт, %s, якій %d років.\n", name, vik);
  } else {
    printf("Стать невідома. \n");
  }

  return 0;
}