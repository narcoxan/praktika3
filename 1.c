#include <stdio.h>

int main() {
    // Создаем массив из 3 строк
    char colors[3][10] = {"красный", "синий", "зеленый"};

    // Выводим массив на экран
    for (int i = 0; i < 3; i++) {
        printf("%s\n", colors[i]);
    }

    return 0;
}
