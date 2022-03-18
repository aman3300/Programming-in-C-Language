#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void add(int m[3][3], int n[3][3], int sum[3][3]);
void sub(int m[3][3], int n[3][3], int sub[3][3]);
void mul(int m[3][3], int n[3][3], int mul[3][3]);
void tran(int m[3][3], int n[3][3], int tran[3][3]);
void display(int matrix[3][3]);
void main()
{
    int a[3][3] = {{5, 6, 7}, {8, 9, 10}, {3, 1, 2}};
    int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int c[3][3];
    printf("First Matrix:\n");
    display(a);
    printf("Second Matrix:\n");
    display(b);
    add(a, b, c);
    sub(a, b, c);
    mul(a, b, c);
    tran(a, b, c);
    getch();
}
void add(int m[3][3], int n[3][3], int sum[3][3])
{
    int i, j;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum[i][j] = m[i][j] + n[i][j];
    printf("Sum Of Matrix=");
    display(sum);
}
void sub(int m[3][3], int n[3][3], int sub[3][3])
{
    int i, j;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sub[i][j] = m[i][j] - n[i][j];
    printf("Difference is=");
    display(sub);
}
void mul(int m[3][3], int n[3][3], int mul[3][3])
{
    int i, j, k;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            for (k = 0; k < 3; k++)
                mul[i][j] = m[i][k] * n[k][j];
    printf("Product is=");
    display(mul);
}
void tran(int m[3][3], int n[3][3], int tran[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tran[i][j] = m[j][i];
    printf("Transpose is=");
    display(tran);
}
void display(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n"); // new line
    }
}