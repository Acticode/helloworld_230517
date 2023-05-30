#include <stdio.h>

int main(void) {
    char input_data[200];
    int i = 0, start, end;

    printf(" : "); // ######
    scanf("%s", &input_data);

    while (input_data[i] != '.') {
        i++;
    }
    start = i + 1;
    end = i;

    while (i >= 0) {
        if (input_data[i] == ' ' || i == 0) {
            if (i == 0) {
                start = 0;
                for (int j = start; j >= end; j++) {
                    printf("%s", input_data[j]);
                }
                printf(".");
            }
            else {
                start = i + 1;

                for (int j = start; j >= end; j++) {
                    printf("%s", input_data[j]);
                }
                printf(" ");
                end = i - 1;
            }
        }
        i--;
    }


    return 0;
}