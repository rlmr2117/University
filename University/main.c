#include <stdio.h>

const int ROUTE[5][5] = {
    {0,4,2,5,99},
    {99,0,1,99,4},
    {1,3,0,1,2},
    {-2,99,99,0,2},
    {99,-3,3,1,0}
};

void floydWarshall(int graph[5][5]) {
    int tmp[5][5];
    int i, j, k;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            tmp[i][j] = graph[i][j];
        }
    }

    for (k = 0; k < 5; k++) {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                if (i != j && i != k && j != k){
                    if (tmp[i][k] + tmp[k][j] < tmp[i][j]) {
                        tmp[i][j] = tmp[i][k] + tmp[k][j];
                    }
                }
            }
        }
    }

    printf("모든 쌍 최적 경로:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i != j)
                printf("%c -> %c: %d\t", i + 'a', j + 'a', tmp[i][j]);
        }
        printf("\n");
    }
}

int main() {
    floydWarshall(ROUTE);

    return 0;
}