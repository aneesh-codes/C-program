//writing and storing in file handling
#include <stdio.h>
#include <string.h>

int main() {
    FILE *ptr = fopen("emp.txt", "r");
//    if (ptr == NULL) {
//        printf("Error opening file!\n");
//        return 1;
//    }

    char name[20], post[20];
    int salary, i;

//    printf("Enter name, post, salary of 3 persons:\n");
//    for (i = 0; i < 3; i++) {
//        scanf("%s %s %d", name, post, &salary);
//        fprintf(ptr, "%s %s %d\n", name, post, salary);
//    }

    // Rewind the file pointer after writing to it
//    rewind(ptr);

    printf("\nManagers in the file:\n");

    while (fscanf(ptr, "%s %s %d", name, post, &salary) != EOF) {
        if (strcasecmp(post, "MANAGER") == 0) {
            printf("%s %s %d\n", name, post, salary);
        }
    }

    fclose(ptr);
    return 0;
}

