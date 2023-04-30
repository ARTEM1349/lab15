#include "lib.h"
#include <stdio.h>
#include <string.h>

Dessert createPastry(char *name, int weight, int calories, int protein, int fat, char *taste, int baking_time, int contains_flour) {
    Dessert pastry;
    strcpy(pastry.name, name);
    pastry.is_gluten_free = 0;
    pastry.weight = weight;
    pastry.calories = calories;
    pastry.protein = protein;
    pastry.fat = fat;
    pastry.carbohydrates = 0;
    strcpy(pastry.taste, taste);
    pastry.baking_time = baking_time;
    pastry.contains_flour = contains_flour;
    return pastry;
}

Dessert createJellyDessert(char *name, int weight, int calories, int protein, int fat, char *taste, char *gelling_agent, int gelling_agent_mass) {
    Dessert jellyDessert;
    strcpy(jellyDessert.name, name);
    jellyDessert.is_gluten_free = 1;
    jellyDessert.weight = weight;
    jellyDessert.calories = calories;
    jellyDessert.protein = protein;
    jellyDessert.fat = fat;
    jellyDessert.carbohydrates = 0;
    strcpy(jellyDessert.taste, taste);
    strcpy(jellyDessert.gelling_agent, gelling_agent);
    jellyDessert.gelling_agent_mass = gelling_agent_mass;
    return jellyDessert;
}

void printDessertInfo(Dessert dessert) {
    printf("Назва: %s\n", dessert.name);
    printf("Вага: %d г\n", dessert.weight);
    printf("Калорії: %d ккал\n", dessert.calories);
    printf("Білки: %d г\n", dessert.protein);
    printf("Жири: %d г\n", dessert.fat);
    printf("Вуглеводи: %d г\n", dessert.carbohydrates);
    printf("Смак: %s\n", dessert.taste);
    printf("Час приготування: %d хв\n", dessert.baking_time);
    printf("Містить борошно: %s\n", dessert.contains_flour ? "Так" : "Ні");
    printf("Безглютеновий: %s\n", dessert.is_gluten_free ? "Так" : "Ні");
}

void printJellyDessertInfo(Dessert dessert) {
    printf("Назва: %s\n", dessert.name);
    printf("Вага: %d г\n", dessert.weight);
    printf("Калорії: %d ккал\n", dessert.calories);
    printf("Білки: %d г\n", dessert.protein);
    printf("Жири: %d г\n", dessert.fat);
    printf("Вуглеводи: %d г\n", dessert.carbohydrates);
    printf("Смак: %s\n", dessert.taste);
    printf("Засіб желатинізації: %s\n", dessert.gelling_agent);
    printf("Маса засобу желатинізації: %d г\n", dessert.gelling_agent_mass);
printf("Безглютеновий: %s\n", dessert.is_gluten_free ? "Так" : "Ні");
}
