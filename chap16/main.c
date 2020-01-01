#include <stdio.h>

int DATA_SIZE = 3;

typedef struct {
    char name[64];
    int age;
    char gender[64];
} User;

void create(User data[]);
void show(const User *data);

int main() {
    User users[DATA_SIZE];

    int i;
    for (i = 0; i < DATA_SIZE; i++) {
        create(&users[i]);
    }
    for (i = 0; i < DATA_SIZE; i++) {
        show(&users[i]);
    }

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
