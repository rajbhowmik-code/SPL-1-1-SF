#include <stdio.h>

void get2D(int r, int c, int arr[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void put2D(int r, int c, int arr[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int r, int c, int A[r][c], int B[r][c], int C[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiMatrices(int r1, int c1, int A[r1][c1], int r2, int c2, int B[r2][c2], int C[r1][c2]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;


    scanf("%d %d", &r1, &c1);
    int A[r1][c1];
    get2D(r1, c1, A);

    
    scanf("%d %d", &r2, &c2);
    int B[r2][c2];
    get2D(r2, c2, B);

    
    if (r1 == r2 && c1 == c2) {
        int Sum[r1][c1];
        addMatrices(r1, c1, A, B, Sum);
        printf("Sum Matrix:\n");
        put2D(r1, c1, Sum);
    } else {
        printf("Addition Not Possible!\n");
    }

    if (c1 == r2) {
        int Product[r1][c2];
        multiMatrices(r1, c1, A, r2, c2, B, Product);
        printf("Product Matrix:\n");
        put2D(r1, c2, Product);
    } else {
        printf("Multiplication Not Possible!\n");
    }

    return 0;
}