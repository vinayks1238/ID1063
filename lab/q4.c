#include <stdio.h>
#include <math.h>

int firstStable(double a[], int n, double tolerance)
{
    int i;

    for (i = 0; i < n - 1; i++)
    {
        if (fabs(a[i + 1] - a[i]) <= tolerance)
            return i;
    }

    return -1;
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    double a[n], tolerance;

    printf("Enter the values of array:\n");

    for (int i = 0; i < n; i++)
        scanf("%lf", &a[i]);

    printf("Enter tolerance: ");
    scanf("%lf", &tolerance);

    printf("%d\n", firstStable(a, n, tolerance));

    return 0;
}
