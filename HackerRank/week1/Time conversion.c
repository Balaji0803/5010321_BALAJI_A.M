#include <stdio.h>
#include <string.h>

void convertTo24HourFormat(char* inputTime) {
    int hrs, mins, secs;
    char period[3];  

    
    sscanf(inputTime, "%2d:%2d:%2d%2s", &hrs, &mins, &secs, period);

    if (strcmp(period, "AM") == 0) {
        if (hrs == 12) hrs = 0;
    } else {
        if (hrs != 12) hrs += 12;
    }

    printf("%02d:%02d:%02d\n", hrs, mins, secs);
}

int main() {
    char timeStr[11];
    scanf("%s", timeStr);  
    convertTo24HourFormat(timeStr);
    return 0;
}
