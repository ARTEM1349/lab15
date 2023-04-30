typedef struct {
    char name[100];
    int is_gluten_free;
    int weight;
    int calories;
    int protein;
    int fat;
    int carbohydrates;
    char taste[100];
    int baking_time;
    int contains_flour;
    char gelling_agent[100];
    int gelling_agent_mass;
} Dessert;

Dessert createPastry(char *name, int weight, int calories, int protein, int fat, char *taste, int baking_time, int contains_flour);

Dessert createJellyDessert(char *name, int weight, int calories, int protein, int fat, char *taste, char *gelling_agent, int gelling_agent_mass);

void printDessertInfo(Dessert dessert);

void printJellyDessertInfo(Dessert dessert);

