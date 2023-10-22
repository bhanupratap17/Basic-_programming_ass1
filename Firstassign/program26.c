#include <stdio.h>

int main()
{
    int hours1, minutes1, seconds1, hours2, minutes2, seconds2, total_seconds, final_hours, final_minutes, final_seconds;

    printf("Enter the first time interval (hh:mm:ss): ");
    scanf("%d:%d:%d", &hours1, &minutes1, &seconds1);

    printf("Enter the second time interval (hh:mm:ss): ");
    scanf("%d:%d:%d", &hours2, &minutes2, &seconds2);

    total_seconds = (hours1 + hours2) * 3600 + (minutes1 + minutes2) * 60 + seconds1 + seconds2;
    final_hours = total_seconds / 3600;
    final_minutes = (total_seconds % 3600) / 60;
    final_seconds = total_seconds % 60;

    printf("The sum of the time intervals is: %02d:%02d:%02d\n", final_hours, final_minutes, final_seconds);

    return 0;
}