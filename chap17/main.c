#include <stdio.h>

int DATA_SIZE = 3;

typedef struct {
    int id;
    char name[64];
    int score;
} Student;

void create(Student *student);
void add(const Student *student, FILE *file);

void add_header(FILE *file) {
    fprintf(file, "%s,%s,%s\n", "番号", "名前", "テストの平均点");
}

int main() {
    Student students[DATA_SIZE];

    int i;
    for (i = 0; i < DATA_SIZE; i++) {
        create(&students[i]);
    }

    FILE *file;
    file = fopen("scores.csv", "w");

    add_header(file);

    for (i = 0; i < DATA_SIZE; i++) {
        add(&students[i], file);
    }

    fclose(file);

    return 0;
}

void create(Student *student) {
    printf("番号: ");
    scanf("%d", &student->id);

    printf("名前: ");
    scanf("%64s", student->name);

    printf("平均点: ");
    scanf("%d", &student->score);
}

void add(const Student *student, FILE *file) {
    fprintf(file, "%d,%s,%d\n", student->id, student->name, student->score);
}
