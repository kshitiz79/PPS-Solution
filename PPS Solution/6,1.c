#include <stdio.h>
int main()
{
    int matrix[100][100];
    int m, n, i, j;
    printf("Enter row and colomns of matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter matrix elements: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix after 90 degrees roration clockwise\n");
    for (i = 0; i < n; i++)
    {
        for (j = m - 1; j >= 0; j--)
        {
            printf("%d  ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}