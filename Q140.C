#include <stdio.h>

// Define enum for gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define struct for person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    // Create a person
    struct Person p1 = {"Rahul", 25, MALE};
    struct Person p2 = {"Priya", 22, FEMALE};
    struct Person p3 = {"Alex", 30, OTHER};

    // Print details
    printf("Name: %s, Age: %d, Gender: ", p1.name, p1.age);
    switch (p1.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    printf("Name: %s, Age: %d, Gender: ", p2.name, p2.age);
    switch (p2.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    printf("Name: %s, Age: %d, Gender: ", p3.name, p3.age);
    switch (p3.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    return 0;
}
