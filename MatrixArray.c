#include <stdio.h>

int main()
{
    int a[2][3], i, j, sum=0;

    printf("Enter the Elements of Matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d\t", &a[i][j]);
        }
    }
    printf("Matrix are:\n");
     for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }

    printf("\nSum of Matrix =%d",sum);
  

    return 0;
}