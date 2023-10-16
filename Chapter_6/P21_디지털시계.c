#include <stdio.h>
#include <unistd.h>

int main() {
    int hours = 0, minutes = 0, seconds = 0;

    while (1) {
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
        sleep(1);

        seconds++;
        if (seconds == 60) {
            seconds = 0;
            minutes++;
            if (minutes == 60) {
                minutes = 0;
                hours++;
                if (hours == 24) {
                    hours = 0;
                }
            }
        }
    }

    return 0;
}
