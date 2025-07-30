// Time (hour, min, sec)
#include <stdio.h>

struct Time {
    int hour;
    int minute;
    int second;
};

struct Time storeTime(struct Time t) {
    printf("Enter Time (HH MM SS): ");
    scanf("%d %d %d", &t.hour, &t.minute, &t.second);
    return t;
}

void displayTime(struct Time t) {
    printf("Time: %02d:%02d:%02d\n", t.hour, t.minute, t.second);
}

void main() {
    struct Time time1;
    printf("Enter details for Time 1\n");
    time1 = storeTime(time1);
    printf("\nDetails of Time 1 (User Input)\n");
    displayTime(time1);
}