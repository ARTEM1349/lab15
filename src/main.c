#include <stdio.h>
#include "lib.h"

int main() {
    // Створення об'єктів десертів
    Dessert pastry1 = createPastry("Фреш", 120, 150, 5, 10, "кисло-солодкий", 30, 1);
    Dessert pastry2 = createPastry("Топік", 500, 200, 8, 15, "пряно-шоколадний", 45, 1);
    Dessert jellyDessert1 = createJellyDessert("Реннарді", 300, 100, 2, 5, "гірко-солодкий", "желатин", 10);

    // Виклик функцій для роботи з десертами
    printDessertInfo(pastry1);
    printDessertInfo(pastry2);
    printJellyDessertInfo(jellyDessert1);

    return 0;
}
