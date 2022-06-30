#include <stdio.h>
void scan(int d[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &d[i]);
    }
}
void merge(int a[], int mid, int l, int h)
{
    int i = l, j = mid + 1, k = l, b[100];
    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= h)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for (i = l; i <= h; i++)
    {
        a[i] = b[i];
    }
}
void sort(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid=(l+h)/2;
        sort(a, l, mid);
        sort(a, mid + 1, h);
        merge(a, mid, l, h);
    }
}
void main()
{
    int m;
    printf("Enter no. of elements in array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter the elements of  array: ");
    scan(a, m);
    int l = 0, h = m-1;
    sort(a, l, h);
    for (int i = 0; i <= h; i++)
        printf("%d ", a[i]);
}