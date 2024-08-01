#include <stdio.h>
#include <unistd.h> // For the sleep function

int main() {
    int countdown_timer;

    printf("Enter the time till you want to count: ");
    fflush(stdout);
    scanf("%d", &countdown_timer);

    for (int i = countdown_timer; i >= 0; i--) {
        printf("%d\r", i); // \r for carriage return, overwrites previous number
        fflush(stdout);
        sleep(1);
    }
    printf("\nTime is up!\n");
    return 0;
}
