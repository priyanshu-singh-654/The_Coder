#include <stdio.h>

int main() {
    int ram_age, shyam_age, ajay_age;

    // Input ages
    printf("Enter Ram's age: ");
    scanf("%d", &ram_age);

    printf("Enter Shyam's age: ");
    scanf("%d", &shyam_age);

    printf("Enter Ajay's age: ");
    scanf("%d", &ajay_age);

    // Check who is the youngest
    if (ram_age <= shyam_age && ram_age <= ajay_age) {
        printf("Ram is the youngest.\n");
    } else if (shyam_age <= ram_age && shyam_age <= ajay_age) {
        printf("Shyam is the youngest.\n");
    } else {
        printf("Ajay is the youngest.\n");
    }

    return 0;
}
