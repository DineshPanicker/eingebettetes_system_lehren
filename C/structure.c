#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

struct Person
{
    char *name;
    int age;
    int height;
    int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
    struct Person *who = malloc(sizeof(struct Person)); // Dies reserviert Speicherplatz fuer ein Struktur
    assert(who != NULL);

    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(struct Person *who)
{
    assert(who != NULL);

    free(who->name);
    free(who);
}

void Person_print(struct Person *who)
{
    if(who == NULL)
    {
        printf("Invalid operation!!\n");
        return;
    }
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

int main()
{
    struct Person *joe = Person_create("Joe Alex", 47, 147, 93);
    struct Person *dinesh = Person_create("Dinesh Panicker", 25, 183, 82);

    // printing them out
    printf("Joe is stored at: %p\n", joe);
    Person_print(joe);
    printf("Dinesh is stored at: %p\n", dinesh);
    free(dinesh);
    Person_print(dinesh);

    Person_destroy(joe);
    Person_destroy(dinesh);

    return 0;
}