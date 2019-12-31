#include <stdio.h>

int main() {
    printf("first name: ");
    char firstName[32];
    scanf("%s", firstName);

    printf("last name: ");
    char lastName[32];
    scanf("%s", lastName);

    char fullName[64];
    sprintf(fullName, "%s %s", firstName, lastName);

    printf("%s\n", fullName);
    return 0;
}
