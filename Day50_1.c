#include <stdio.h>

int main(void) {
    char date[20];
    int dd, mm, yyyy;

    const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);

    // parse digits manually: dd/mm/yyyy
    int i = 0;
    dd = 0;
    while (date[i] >= '0' && date[i] <= '9') {
        dd = dd * 10 + (date[i] - '0');
        i++;
    }
    i++;  // skip '/'

    mm = 0;
    while (date[i] >= '0' && date[i] <= '9') {
        mm = mm * 10 + (date[i] - '0');
        i++;
    }
    i++;  // skip '/'

    yyyy = 0;
    while (date[i] >= '0' && date[i] <= '9') {
        yyyy = yyyy * 10 + (date[i] - '0');
        i++;
    }

    if (mm < 1 || mm > 12) {
        printf("Invalid month.\n");
        return 1;
    }

    printf("%02d-%s-%d\n", dd, months[mm - 1], yyyy);

    return 0;
}