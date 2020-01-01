#include <stdio.h>
#include <stdlib.h>

#define INITIAL_DATA_SIZE 3

typedef struct {
    char name[64];
    int age;
    char gender[64];
} User;

void create(User data[]);
void show(const User *data);

int main() {
    User *users;

    int data_size = INITIAL_DATA_SIZE;
    users = malloc(sizeof(User) * data_size);

    int count = 0;
    while(1) {
        create(&users[count]);
        if (users[count].age == -1) {
            break;
        }
        count++;

        if (count >= data_size) {
            data_size += 10;
            users = realloc(users, sizeof(User) * data_size);
        }
    }

    int i;
    for (i = 0; i < count; i++) {
        show(&users[i]);
    }

    free(users);

    return 0;
}

void create(User *data) {
    printf("名前: ");
    scanf("%64s", data->name);

    printf("年齢: ");
    scanf("%d", &data->age);

    printf("性別: ");
    scanf("%64s", data->gender);
}

void show(const User *data) {
    printf("[名前]: %s\n", data->name);
    printf("[年齢]: %d\n", data->age);
    printf("[性別]: %s\n", data->gender);
}
