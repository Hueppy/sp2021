#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define ANIMALCOUNT 10

enum viech {
    MAMMAL,
    FISH,
    BIRD,
    AMPHIBIAN,
    REPTILES
};

struct animal {
    enum viech species;
    char name[20];
    uint8_t age;
    float food_weight;
};

struct animal zoo[ANIMALCOUNT] = {
        { .species = MAMMAL,    .name = "Gert",   .age = 4, .food_weight = 1.5 },
        { .species = BIRD,      .name = "Hubert", .age = 1, .food_weight = 0.3 },
        { .species = AMPHIBIAN, .name = "Günter", .age = 2, .food_weight = 0.5 },
        { .species = REPTILES,  .name = "Olaf",   .age = 3, .food_weight = 0.7 },
};

bool assigned(uint8_t i) {
    return i < ANIMALCOUNT && zoo[i].food_weight != 0;
}

uint8_t calculate_average_age() {
    uint8_t count = 0;
    uint16_t sum = 0;
    while (assigned(count)) {
        sum += zoo[count].age;
        count++;
    }

    return sum / count;
}

void more_food() {
    const float modifier[] = {
            1.10,
            1.04,
            1.01,
            1.02,
            1.00
    };

    uint8_t i = 0;
    while (assigned(i)) {
        zoo[i].food_weight *= modifier[zoo[i].species];
        i++;
    }
}

void print_animal(struct animal animal) {
    const char species_name[][10] = {
            "Mammal",
            "Fish",
            "Bird",
            "Amphibian",
            "Reptiles",
    };

    printf("%s\t%s\t%d\t%f\n",
           species_name[animal.species],
           animal.name,
           animal.age,
           animal.food_weight
           );
}

void print_zoo() {
    printf("Spezies\tName\tAlter\tFutter\n");
    uint8_t i = 0;
    while (assigned(i)) {
        print_animal(zoo[i]);
        i++;
    }
}

int main() {
    printf("Avg. age: %d\n", calculate_average_age());
    while (true) {
        print_zoo();
        more_food();
        getchar();
    }

}
