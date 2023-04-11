#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "euclid.h"

int main() {
    time_t start_time = 0, end_time = 0;
    double result;
    int i = 0;

    start_time = time(NULL);
    test_Euclid();
    end_time = time(NULL);

    result = difftime(end_time, start_time);
    printf("총 소요 시간 : %lf 초\n", result);

    return 0;
}